#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 500
using namespace std;

void Nhap(int[], int);
void Xuat(int[], int);
bool ktDoiXung(int);
int DoiXungDau(int[], int);

int main()
{
	int a[MAX], n;
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nGia tri doi xung dau tien trong mang: " << DoiXungDau(a, n);
}

void Nhap(int a[], int n)
{
	srand(time(NULL));
	if (n == 0)
	{
		return;
	}
	Nhap(a, n - 1);
	a[n - 1] = rand() % 201 -100;
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

bool ktDoiXung(int n)
{
	int t = abs(n);
	int dn = 0;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	if (dn == n)
		return true;
	return false;
}

int DoiXungDau(int a[], int n)
{
	if (n == 0)
	{
		return 10;
	}
	int lc = DoiXungDau(a, n - 1);
	if (lc != 0)
		return lc;
	if (ktDoiXung(a[n - 1]))
	{
		return a[n - 1];
	}
	return 10;

}