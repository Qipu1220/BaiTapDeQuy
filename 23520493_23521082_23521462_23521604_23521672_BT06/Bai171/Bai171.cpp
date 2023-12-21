#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 500
using namespace std;

void Nhap(float[], int);
void Xuat(float[], int);
int ktGiam(float[], int,int ,int);
void XuatCon(int[], int, int, int);
void LietKe(float[], int);
int Dem(float[], int);

int main()
{
	float a[MAX];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	cout << endl;
	LietKe(a, n);
	cout << "So luong mang con giam: ";
	cout << Dem(a, n);
	return 0;
}

void Nhap(float a[], int n)
{
	srand(time(NULL));
	if (n == 0)
		return;
	Nhap(a, n - 1);
	a[n - 1] = ((float)rand()/RAND_MAX) * 200 - 100;
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(10) << a[n - 1];
}

void XuatCon(float a[], int n, int vt, int l)
{
	if (l == 0)
		return;
	XuatCon(a, n, vt, l - 1);
	cout << setw(10) << a[vt + l - 1];
}


void LietKe(float a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	for (int l = 2; l <= n; l++)
	{
		XuatCon(a, n, n - l, l);
		cout << endl;
	}
}

int Dem(float a[], int n)
{
	if (n == 0)
		return 0;
	int dem = Dem(a, n - 1);
	for (int l = 2; l <= n; l++)
	{
		if (ktGiam(a, n, n - l, l) == 1)
			dem++;
	}
	return dem;
}

int ktGiam(float a[], int n, int vt, int l)
{
	if (l == 0)
		return 0;
	if (l == 1)
		return 1;  
	if (a[vt + l - 2] >= a[vt + l - 1] && ktGiam(a,n,vt,l-1) == 1)
		return 1;
	return 0;
}