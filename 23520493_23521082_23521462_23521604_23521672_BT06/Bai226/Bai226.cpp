#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
#define MAX 200

void Nhap(float[][MAX], int, int);
void Xuat(float[][MAX], int, int);
int DemDuong(float[][MAX], int, int);

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
	cout << "\nSo luong gia tri duong trong ma tran: " << DemDuong(a, m, n);
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

int DemDuong(float a[][MAX], int m, int n)
{
	if (m == 0)
		return 0;
	int dem = DemDuong(a, m-1, n);
	for (int j = 0; j < n; j++)
	{
		if (a[m - 1][j] > 0)
			dem++;
	}
	return dem;
}