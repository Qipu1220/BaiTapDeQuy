#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int&, int&);
void MotVeDau(int[], int);

int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	cout << "Mang ban dau: \n";
	Xuat(a, n);

	MotVeDau(a, n);
	cout << "\nMang 1 ve dau: \n";
	Xuat(a, n);

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(10) << a[n - 1];
}

void HoanVi(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void MotVeDau(int a[], int n)
{
	if (n == 0)
		return;
	if (a[n - 1] != 1)
	{
		MotVeDau(a, n - 1);
		return;
	}
	for (int i = 0; i <= n - 2; i++)
		if (a[i] != 1)
		{
			HoanVi(a[i], a[n - 1]);
			break;
		}
	MotVeDau(a, n - 1);
}