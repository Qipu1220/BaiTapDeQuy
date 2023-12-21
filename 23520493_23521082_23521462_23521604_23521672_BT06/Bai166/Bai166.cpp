#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#define MAX 500
using namespace std;

void Nhap(int[], int);
void Xuat(int[], int);
void XuatCon(int[], int, int, int);
void XuatCon(int[], int,int);
void XuatCon(int[], int);
void LietKe(int[], int);

int main()
{
	int a[MAX];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	cout << endl;
	LietKe(a, n);
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
		return;
	Xuat(a, n - 1);
	cout << setw(10) << a[n - 1];
}


void XuatCon(int a[], int n, int vt, int l)
{
	if (l == 0)
		return;
	XuatCon(a, n, vt, l - 1);
	cout << setw(8) << a[vt + l - 1];
}

//void XuatCon(int a[], int n, int l)
//{
//	if (n < l)
//		return;
//	XuatCon(a, n - 1, l);
//	XuatCon(a, n, n - l, l);
//	cout << endl;
//}

//void XuatCon(int a[], int n)
//{
//	if (n == 0)
//		return;
//	XuatCon(a, n - 1);
//	for (int l = 1; l <= n; l++)
//	{
//		XuatCon(a, n, n-l,l);
//		cout << endl;
//	}
//}

void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	for (int l = 3; l <= n; l++)
	{
		XuatCon(a, n, n-l,l);
		cout << endl;
	}
}