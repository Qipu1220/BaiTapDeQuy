#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void SapXep(int[], int);

int main()
{
	int a[100], n;
	Nhap(a, n);
	cout << "Mang ban dau la: " << endl;
	Xuat(a, n);
	SapXep(a, n);
	cout << "\nMang sau khi sap xep la: " << endl;
	Xuat(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(4) << a[n - 1];
}

void SapXep(int a[], int n)
{
	if (n == 0)
		return;
	if (n == 1)
		return;
	for (int i = 0; i < n; i++)
		if (a[i] < a[n - 1])
			swap(a[i], a[n - 1]);
	SapXep(a, n - 1);
}