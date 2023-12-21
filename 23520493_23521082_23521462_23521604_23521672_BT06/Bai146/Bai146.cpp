#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 500
using namespace std;

void Nhap(int[], int);
void Xuat(int[], int);
int ktChanLe(int[], int);

int main()
{
	int a[MAX];
	int n;
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	cout << endl << ktChanLe(a, n);
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
	cout << setw(8) << a[n - 1];
}

int ktChanLe(int a[], int n)
{
	if (n <= 1)
	{
		return 0;
	}
	if (n == 2)
	{
		if ((a[0] + a[1]) % 2 != 0)
			return 1;
		return 0;
	}
	if ((a[n - 1] + a[n - 2]) % 2 != 0)
	{
		if (ktChanLe(a, n - 1) == 1)
			return 1;
	}
	return 0;
}