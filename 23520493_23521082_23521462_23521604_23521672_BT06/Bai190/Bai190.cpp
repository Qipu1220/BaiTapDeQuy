#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int DemXuatHien(int[], int, int[], int);

int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	cout << "Mang a: \n";
	Xuat(a, n);

	int k;
	int b[100];
	Nhap(b, k);
	cout << "Mang b: \n";
	Xuat(b, k);

	cout << "\nSo lan xuat hien mang a trong mang b: " << DemXuatHien(a, n, b, k);

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "\nNhap n: ";
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

int DemXuatHien(int a[], int n, int b[], int k)
{
	if (n == 0)
		return 0;
	if (k == 0)
		return 0;
	int dem = DemXuatHien(a, n, b, k - 1);
	for (int i = 0; i < n; i++)
		if (a[i] == b[k - 1])
			dem++;
	return dem;
}