#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int DauTien(int[], int, int, int);

int main()
{
	int a[100], n;
	Nhap(a, n);
	cout << "Mang ban dau la: " << endl;
	Xuat(a, n);
	int x, y;
	cout << "Nhap vao x va y: ";
	cin >> x >> y;
	cout << "\nDap an la: " << endl;
	cout << DauTien(a, n,x,y);
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
	cout << setw(4) << a[n - 1]<<endl;
}
int DauTien(int a[], int n, int x, int y)
{
	if (n == 0)
		return x;
	int lc = DauTien(a, n - 1, x, y);
	if (lc != x)
		return lc;
	if (a[n - 1] > x && a[n - 1] < y)
		return a[n-1];
	return x;
}