#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int TimViTri(int[],int,int);

int main()
{
	int n;
	int a[100];
	Nhap(a, n);

	int x;
	cout << "Nhap x: ";
	cin >> x;

	int kq;
	kq = TimViTri(a, n, x);
	cout << "Vi tri cua x trong mang : " << kq;
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
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}

int TimViTri(int a[], int n, int x)
{
	if (n == 0)
		return -1;
	if (a[n - 1] == x)
		return n-1;
	return TimViTri(a, n - 1, x);
}