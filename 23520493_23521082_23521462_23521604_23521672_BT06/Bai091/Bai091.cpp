#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 200
using namespace std;

void Nhap(int[], int);
void Xuat(int[], int);
int Tong(int[], int);

int main()
{
	int a[MAX];
	int n;
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nTong cac phan tu co chu so dau la so le: " << Tong(a, n);
	return 0;
}

void Nhap(int a[], int n)
{
	srand(time(NULL));
	if (n == 0)
	{
		return;
	}
	Nhap(a,n - 1);
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

int Tong(int a[], int n)
{
	if (n == 0)
	{
		return 0;
	}
	int s = Tong(a, n - 1);
	int t = a[n - 1];
	while (t > 9)
	{
		t = t / 10;
	}
	if (t % 2 != 0)
	{
		return s + a[n - 1];
	}
	else
		return s;
}
