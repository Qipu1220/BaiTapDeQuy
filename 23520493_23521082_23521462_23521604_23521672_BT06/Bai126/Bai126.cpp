#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 500
using namespace std;

void Nhap(int[], int);
void Xuat(int[], int);
int ViTriDau(int[], int);

int main()
{
	int a[MAX], n;
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nvi tri gia tri chan dau tien " << ViTriDau(a, n);
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


int ViTriDau(int a[], int n)
{
	if (n == 0)
	{
		return -1;
	}
	int lc = ViTriDau(a, n - 1);
	if (lc != -1)
		return lc;
	if (a[n-1] % 2 == 0)
	{
		return n - 1;
	}
	return -1;

}