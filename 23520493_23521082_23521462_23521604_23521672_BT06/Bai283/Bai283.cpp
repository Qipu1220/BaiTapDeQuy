#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int a[][100], int m, int n);
void Xuat(int a[][100], int m, int n);
void ThemDong(int a[][100], int& m, int n);
int TongCot(int a[][100], int m, int n, int c);

int main()
{
	int a[100][100], m, n;
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "Ma tran sau khi them dong la: " << endl;
	ThemDong(a, m, n);
	Xuat(a, m, n);
}
void Nhap(int a[][100], int m, int n)
{
	if (m == 0)
		return;

	Nhap(a, m - 1, n);
	for (int j = 0; j < n; j++)
		cin >> a[m - 1][j];
}

void Xuat(int a[][100], int m, int n)
{
	if (m == 0)
		return;
	Xuat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		cout << setw(8) << setprecision(4) << a[m - 1][j];
	cout << endl;
}

int TongCot(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return 0;
	return TongCot(a, m - 1, n, c) + a[m - 1][c];
}

void ThemDong(int a[][100], int &m, int n)
{
	if (n == 0)
	{
		m++;
		return;
	}
	a[m][n - 1] = TongCot(a, m , n, n - 1);
	ThemDong(a, m , n - 1);
}


