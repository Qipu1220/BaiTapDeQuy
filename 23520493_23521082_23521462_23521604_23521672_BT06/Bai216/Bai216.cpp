#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
#define MAX 200

void Nhap(float[][MAX], int, int);
void Xuat(float[][MAX], int, int);
float TongDong(float[][MAX], int, int, int);

int main()
{
	float a[MAX][MAX];
	int n, m, vtd;
	cout << "Nhap so hang: ";
	cin >> n;
	cout << "Nhap so cot: ";
	cin >> m;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "\nNhap dong can tinh tong: ";
	cin >> vtd;
	cout << "Tong la: " << TongDong(a, m, n, vtd);
	return 0;
}

void Nhap(float a[][MAX], int m, int n)
{
	srand(time(NULL));
	if (m == 0)
		return;
	Nhap(a, m - 1, n);
	for (int i = 0; i < n; i++)
	{
		a[m - 1][i] = ((float)rand() / RAND_MAX) * 200 - 100;
	}
}

void Xuat(float a[][MAX], int m, int n)
{
	if (m == 0)
		return;
	Xuat(a, m - 1, n);
	for (int i = 0; i < n; i++)
	{
		cout << setw(10) << fixed << setprecision(2) << a[m - 1][i];
	}
	cout << endl;
}


float TongDong(float a[][MAX], int m, int n, int vtd)
{
	if (n == 0)
		return 0;
	float s = TongDong(a, m, n - 1, vtd);
	return s + a[vtd][n - 1];
}