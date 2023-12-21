#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);

int main()
{
	int a[100], n;
	Nhap(a, n);
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
	cout << setw(4) << a[n-1];
}