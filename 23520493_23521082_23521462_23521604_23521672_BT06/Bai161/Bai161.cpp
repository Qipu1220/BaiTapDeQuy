#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 500
using namespace std;

void Nhap(float[], int);
void Xuat(float[], int);
void Xoa(float[], int&, int);

int main()
{
	float a[MAX];
	int n, x;
	cout << "Nhap n: ";
	cin >> n;
	Nhap(a, n);
	cout << "\nMang ban dau: " << endl;
	Xuat(a, n);
	cout << "\nNhap vi tri can xoa: ";
	cin >> x;
	Xoa(a, n, x);
	cout << "\nMang luc sau: " << endl;
	Xuat(a, n);
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

void Xoa(float a[], int& n, int vt)
{
	if (vt == n - 1)
	{
		n--;
		return;
	}
	a[vt] = a[vt + 1];
	Xoa(a, n, vt + 1);
}