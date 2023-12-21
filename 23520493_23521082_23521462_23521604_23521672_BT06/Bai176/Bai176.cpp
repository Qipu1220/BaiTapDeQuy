#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 500
using namespace std;

void Nhap(int [], int);
void Xuat(int[], int);
void VeDau(int[], int);

int main()
{
	int a[MAX], n; 
	cout << "Nhap n: ";
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	cout << endl;
	cout << "Dua cac so chia het cho 3 ve dau: ";
	VeDau(a, n);
	cout << endl;
	Xuat(a, n);
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

void VeDau(int a[], int n)
{
	if (n == 0)
	{
		return;
	}
	if (a[n - 1] % 3 != 0)
	{
		VeDau(a, n - 1);
		return;
	}
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] % 3 != 0)
		{
			swap(a[i], a[n - 1]);
			break;
		}
	}
	VeDau(a, n - 1);
}