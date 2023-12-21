#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float AmLonNhat(float[], int);

int main()
{
	int n;
	float a[100];
	Nhap(a, n);
	cout << "Mang ban dau: \n";
	Xuat(a, n);

	cout << "\nGia tri am lon nhat: " << AmLonNhat(a, n);

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = (float)rand() / RAND_MAX * 200 - 100;
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(10) << fixed << setprecision(2) << a[n - 1];
}

float AmLonNhat(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = AmLonNhat(a, n - 1);
	if (a[n - 1] >= 0)
		return lc;
	if (lc == 0)
		return a[n - 1];
	if (a[n - 1] > lc)
		return a[n - 1];
	return lc;
}