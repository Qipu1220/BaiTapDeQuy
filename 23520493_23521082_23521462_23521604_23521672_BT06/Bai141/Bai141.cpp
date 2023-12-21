#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 500
using namespace std;

void Nhap(int[], int);
void Xuat(int[], int);
int ktTonTai(int[], int);

int main()
{
	int a[MAX];
	int n;
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	cout << endl << ktTonTai(a, n);
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
	Xuat(a,n - 1);
	cout << a[n - 1] << setw(8);
}

int ktTonTai(int a[], int n)
{
	if (n <= 1)
	{
		return 0;
	}
	if (a[n - 1] == 0 && a[n - 2] == 0)
	{
		return 1;
	}
	return ktTonTai(a, n - 1);
}