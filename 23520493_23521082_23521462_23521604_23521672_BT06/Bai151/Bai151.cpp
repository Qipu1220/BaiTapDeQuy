#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#define MAX 500
using namespace std;

void Nhap(float[], int);
void Xuat(float[], int);
void XayDung(float[], int, float[], int&);

int main()
{
	float a[MAX], b[MAX];
	int n, m;
	cin >> n;
	Nhap(a, n);
	cout << "\nMa tran ban dau: " << endl;
	Xuat(a, n);
	XayDung(a, n, b, m);
	cout << "\nMa tran luc sau: " << endl;
	Xuat(b, m);
	return 0;
}


void Nhap(float a[], int n)
{
	srand(time(NULL));
	if (n == 0)
	{
		return;
	}
	Nhap(a, n - 1);
	a[n - 1] = ((float)rand() / RAND_MAX) * 200 - 100;
}


void Xuat(float a[], int n)
{
	if (n == 0)
	{
		return;
	}
	Xuat(a, n - 1);
	cout << setw(10) << a[n - 1];
}

void XayDung(float a[], int n, float b[], int& m)
{
	if (n == 0)
	{
		m = 0;
		return;
	}
	XayDung(a, n-1, b, m);
	if (a[n - 1] < 0)
	{
		b[m++] = a[n - 1];
	}

}