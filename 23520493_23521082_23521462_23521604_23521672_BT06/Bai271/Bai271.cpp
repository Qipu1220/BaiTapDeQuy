#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 200
using namespace std;


void Nhap(float[][MAX], int, int);
void Xuat(float[][MAX], int, int);
void SapDongGiam(float[][MAX], int, int, int);

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
	int vtd;
	cout << "\nNhap dong: ";
	cin >> vtd;
	cout << "Sap giam dong vua nhap: " << endl;
	SapDongGiam(a, m, n, vtd);
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

void SapDongGiam(float a[][MAX], int m, int n, int vtd)
{
	if (n == 1)
		return;
	for (int j = 0; j < n - 1; j++)
	{
		if (a[vtd][j] < a[vtd][n - 1])
			swap(a[vtd][j], a[vtd][n - 1]);
	}
	SapDongGiam(a, m, n - 1, vtd);
}