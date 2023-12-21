#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 500
using namespace std;

void Nhap(int[], int);
void Xuat(int[], int);
bool kt5m(int);
int TimGiaTri(int[], int);

int main()
{
	int a[MAX], n;
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nGia tri 5m lon nhat: " << TimGiaTri(a, n);

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

bool kt5m(int n)
{
	int t = n;
	while (t != 1)
	{
		if (t % 5 != 0)
			return false;
		t = t / 5;
	}
	return true;
}

int TimGiaTri(int a[], int n)
{
	if (n == 0)
	{
		return 0;
	}
	int lc = TimGiaTri(a, n - 1);
	if (!kt5m(a[n - 1]))
		return lc;
	if (lc == 0)
	{
		return a[n - 1];
	}
	if (a[n - 1] > lc)
	{
		lc = a[n - 1];
	}
	return lc;
}