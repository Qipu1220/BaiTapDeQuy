#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
float TongDuong(float[], int);

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

float TongDuong(float a[], int n)
{
	if (n == 0)
		return 0;
	float s = TongDuong(a, n - 1);
	if (a[n - 1] > 0)
		s = s + a[n - 1];
	return s;
}

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "Tong cac gia tri duong la : " << TongDuong(a, n);
	return 0;
}