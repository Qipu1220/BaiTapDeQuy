#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XayDung(int[], int, int[], int&);

int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	cout << "Mang ban dau: \n";
	Xuat(a, n);

	int b[100];
	int m;
	XayDung(a, n, b, m);
	cout << "\nMang b la: \n";
	Xuat(b, m);

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 201 - 100;
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(10) << fixed << setprecision(2) << a[n - 1];
}

void XayDung(int a[], int n, int b[], int& m)
{
	if (n == 0)
	{
		m = 0;
		return;
	}
	XayDung(a, n - 1, b, m);
	if (a[n - 1] %2!= 0)
		b[m++] = a[n - 1];
}