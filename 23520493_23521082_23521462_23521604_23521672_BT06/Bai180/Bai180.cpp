#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XuatBo2(float, float);
void LietKe(float[], int);

int main()
{
	int n;
	float a[100];
	Nhap(a, n);
	cout << "Mang ban dau: \n";
	Xuat(a, n);

	cout << "\nTat ca cac cap gia tri: \n";
	LietKe(a, n);

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

void XuatBo2(float x, float y)
{
	cout << setw(10) << fixed << setprecision(2);
	cout << "(" << x << "," << y << ")" << endl;
}

void LietKe(float a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i <= n - 2; i++)
	{
		XuatBo2(a[i], a[n - 1]);
		XuatBo2(a[n - 1], a[i]);
	}
	LietKe(a, n - 1);
}