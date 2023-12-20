#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void ThemDong(int[][100], int&, int,int);

int main()
{
	int m, n;
	int a[100][100];
	Nhap(a, m, n);
	cout << "Mang ban dau: \n";
	Xuat(a, m, n);
	int d;
	cout << "\nNhap dong can them: ";
	cin >> d;
	cout << "\nMang sau khi sap: \n";
	ThemDong(a, m, n,d);
	Xuat(a, m, n);

	return 0;
}

void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

void Xuat(int a[][100], int m, int n)
{
	if (m == 0)
		return;
	Xuat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		cout << setw(8) << a[m - 1][j];
	cout << endl;
}
void ThemDong(int a[][100], int& m, int n, int d)
{
	if (n == 0)
	{
		 m++;
		 return;
	}
	ThemDong(a, m, n - 1, d);
	for (int i = m; i > d; i--)
		a[i][n - 1] = a[i - 1][n - 1];
	a[d][n - 1] = 1;
}