#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 500
using namespace std;

void Nhap(int[], int);
void Xuat(int[], int);
bool ktNguyenTo(int);
void NguyenToTang(int[], int);

int main()
{
	int a[MAX];
	int n;
	cin >> n;
	Nhap(a, n);
	cout << "\nChua sap xep nguyen to: " << endl;
	Xuat(a, n);
	NguyenToTang(a, n);
	cout << "\nSau khi sap xep nguyen to: " << endl;
	Xuat(a, n);
	return 0;
}

void Nhap(int a[], int n)
{
	srand(time(NULL));
	if (n == 0)
	{
		return;
	}
	Nhap(a, n - 1);
	a[n - 1] = rand() % 201 - 100;
}


void Xuat(int a[], int n)
{
	if (n == 0)
	{
		return;
	}
	Xuat(a, n - 1);
	cout << a[n - 1] << setw(8);
}

bool ktNguyenTo(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			dem++;
	}
	if (dem == 2)
		return true;
	return false;
}

void NguyenToTang(int a[], int n)
{
	if (n == 1)
	{
		return;
	}
	for (int i = 0; i <= n - 2; i++)
	{
		if (ktNguyenTo(a[i]) && ktNguyenTo(a[n - 1]) && a[i] > a[n - 1])
			swap(a[i], a[n - 1]);
	}
	return NguyenToTang(a, n - 1);
}