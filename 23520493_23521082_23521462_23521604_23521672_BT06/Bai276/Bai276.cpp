#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 200
using namespace std;


void Nhap(float[][MAX], int, int);
void Xuat(float[][MAX], int, int);
void HoanViDong(float[][MAX], int, int, int,int);
float TongDong(float[][MAX], int, int, int, int);
void SapXep(float[][MAX], int, int);

int main()
{
	float a[MAX][MAX];
	int m, n;
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "\nSap xep: " << endl;
	SapXep(a, m, n);
	Xuat(a, m, n);
	return 0;
}

void Nhap(float a[][MAX], int m, int n)
{
	srand(time(NULL));
	if (m == 0)
		return;
	Nhap(a, m - 1, n);
	for (int i = 0; i < n; i++)
		a[m - 1][i] = ((float)rand() / RAND_MAX) * 200 - 100;
}


void Xuat(float a[][MAX], int m, int n)
{
	if (m == 0)
		return;
	Xuat(a, m - 1, n);
	for (int i = 0; i < n; i++)
		cout << setw(10) << fixed << setprecision(2) << a[m - 1][i];
	cout << endl;
}


void HoanViDong(float a[][MAX], int m, int n, int d1, int d2)
{
	if (n == 0)
		return;
	HoanViDong(a, m, n - 1, d1, d2);
	swap(a[d1][n - 1], a[d2][n - 1]);
}

float TongDong(float a[][MAX], int m, int n, int d)
{
	if (n == 0)
		return 0;
	return TongDong(a, m, n-1, d) + a[d][n-1];
}

void SapXep(float a[][MAX], int m, int n)
{
	if (m == 1)
		return;
	for (int i = 0; i < m - 1; i++)
		if (TongDong(a, m, n, i) > TongDong(a, m, n, m - 1))
			HoanViDong(a, m, n, i, m - 1);
	SapXep(a, m - 1, n);
}