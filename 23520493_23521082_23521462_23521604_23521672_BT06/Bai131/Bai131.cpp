#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 500
using namespace std;

void Nhap(int[], int);
void Xuat(int[], int);
bool ktNguyenTo(int);
int TimGiaTri(int[], int);

int main()
{
	int a[MAX], n;
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nGia tri nguyen to lon nhat: " << TimGiaTri(a, n);

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

bool ktNguyenTo(int n)
{
	int dem =0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			dem++;
	}
	if (dem == 2)
		return true;
	return false;
}

int TimGiaTri(int a[], int n)
{
	if (n == 0)
	{
		return 0;
	}
	int lc = TimGiaTri(a, n - 1);
	if (!ktNguyenTo(a[n - 1]))
		return lc;
	if (lc == 0)
	{
		return a[n - 1];
	}
	if (a[n-1] > lc)
	{
		lc = a[n - 1];
	}
	return lc;
}