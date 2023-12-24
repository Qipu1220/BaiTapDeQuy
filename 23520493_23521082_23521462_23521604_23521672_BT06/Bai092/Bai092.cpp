#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int TongGiaTri(int [], int);

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

int ChuSoDau(int n)
{
	int t = n;
	while (t > 0)
		t = t / 10;
	return t;
}

int TongGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int s = TongGiaTri(a,n - 1);
	if (ChuSoDau(a[n - 1]) % 2 == 0)
		s = s + a[n - 1];
	return s;
}

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "Tong cac gia tri co chu so dau tien chan la : " << TongGiaTri(a, n);
	return 0;
}