#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void SapXep(float[], int);
void ThemBaoToan(float[], int&, float);

int main()
{
	float a[100];
	int n,x;
	Nhap(a, n);
	cout << "Mang ban dau la: " << endl;
	Xuat(a, n);
	SapXep(a, n);
	cout << "\nMang tang dan la: "<<endl;
	Xuat(a, n);
	cout << "\nNhap x: ";
	cin >> x;
	ThemBaoToan(a, n, x);
	Xuat(a, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
	}
}
void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(4) << setprecision(3) << a[n - 1] << " ";
}
void SapXep(float a[], int n)
{
	if (n == 0)
		return;
	if (n == 1)
		return;
	for (int i = 0; i < n; i++)
		if (a[i] > a[n - 1])
			swap(a[i], a[n - 1]);
	SapXep(a, n - 1);
}
void ThemBaoToan(float a[], int& n, float x)
{
	if (n == 0)
	{
		a[0] = x;
		n++;
		return;
	}
	if (x >= a[n - 1])
	{
		a[n] = x;
		n++;
		return;
	}
	a[n] = a[n - 1];
	n--;
	ThemBaoToan(a, n, x);
	n++;
}