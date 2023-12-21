#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 200
using namespace std;

void Nhap(int[], int);
void Xuat(int[], int);
bool ktHoanThien(int);
int DemHoanThien(int[], int);

int main()
{
	int a[MAX], n;
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nSo luong so hoan thien trong mang: " << DemHoanThien(a, n);
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

bool ktHoanThien(int n)
{
	if (n <= 0)
		return false;
	int s = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			s += i;
	}
	if (s == n)
		return true;
	return false;
}

int DemHoanThien(int a[], int n)
{
	if (n == 0)
	{
		return 0;
	}
	int dem = DemHoanThien(a, n - 1);
	if (ktHoanThien(a[n - 1]))
	{
		dem++;
	}
	return dem;
}
