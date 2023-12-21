#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 2000
using namespace std;

void Nhap(int[], int);
void Xuat(int[], int);
bool ktNguyenTo(int);
int DemNguyenToPhanBiet(int[], int);


int main()
{
	int a[MAX];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nSo luong so nguyen to phan biet la: " << DemNguyenToPhanBiet(a, n);
	return 0;
}

void Nhap(int a[], int n)
{
	srand(time(NULL));
	if (n == 0)
		return;
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
	cout << setw(10) << a[n - 1];
}

bool ktNguyenTo(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			dem++;
		}
	}
	if (dem == 2)
		return true;
	return false;
}


int DemNguyenToPhanBiet(int a[], int n)
{
	if (n == 0)
	{
		return 0;
	}
	int dem = DemNguyenToPhanBiet(a, n - 1);
	int flag = 1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == a[n - 1])
			flag = 0;
	}
	if (flag == 1 && ktNguyenTo(a[n - 1]))
		dem++;
	return dem;
}