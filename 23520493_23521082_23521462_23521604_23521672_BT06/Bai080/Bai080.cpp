#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void LietKe(float[], int,float,float);

int main()
{
	int n;
	float a[100];
	Nhap(a, n);
	cout << "Mang ban dau: \n";
	Xuat(a, n);

	int x, y;
	cout << "\nNhap [x,y]: \n";
	cin >> x >> y;
	cout << "Cac gia tri trong khoang [" << x << "'" << y << "]: \n";
	LietKe(a, n, x, y);

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = (float)rand()/RAND_MAX*200 - 100;
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(6)<<fixed<<setprecision(2) << a[n - 1];
}

void LietKe(float a[], int n, float x, float y)
{
	if (n == 0)
		return;
	LietKe(a, n - 1, x, y);
	if (a[n - 1] >= x && a[n - 1] <= y)
		cout << setw(6) << a[n - 1];
}