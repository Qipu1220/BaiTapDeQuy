#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int DemGiaTri(int[], int);

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

int DemGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int dem = DemGiaTri(a, n - 1);
	if (abs(a[n - 1]) % 10 == 5)
		dem++;
	return dem;
}

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "So luong cac gia tri co chu so tan cung la 5 la : " << DemGiaTri(a, n);
	return 0;
}