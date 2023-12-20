#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int TongChinhPhuong(int[], int);

int main()
{
	int a[100], n;
	Nhap(a, n);
	cout << "Mang ban dau la: " << endl;
	Xuat(a, n);
	cout << "\nTong so chinh phuong la: " << endl;
	cout << TongChinhPhuong(a, n);
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
bool ChinhPhuong(int n)
{
	int t = sqrt(n);
	return (t * t == n);
}
void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(4) << a[n - 1];
}
int TongChinhPhuong(int a[], int n)
{
	if (n == 0)
		return 0;
	int s = TongChinhPhuong(a, n - 1);
	if (ChinhPhuong(a[n - 1]))
		s = s + a[n-1];
	return s;

}