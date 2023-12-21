#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 200
using namespace std;

void Nhap(int[], int);
void Xuat(int[], int);
int DemGiaTri(int[], int);

int main()
{
	int a[MAX], n;
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nSo phan tu duong chia het cho 7: " << DemGiaTri(a, n);
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
	cout << a[n - 1] << setw(10);
}

int DemGiaTri(int a[], int n)
{
	if (n == 0)
	{
		return 0;
	}
	int dem = DemGiaTri(a, n - 1);
	if (a[n - 1] > 0 && a[n - 1] % 7 == 0)
	{
		dem++;
	}
	return dem;
}

