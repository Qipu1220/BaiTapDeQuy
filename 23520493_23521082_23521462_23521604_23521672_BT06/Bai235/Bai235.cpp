#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int DemAm(int[][100], int, int, int);

int main()
{
	int m, n;
	int a[100][100];
	Nhap(a, m, n);
	cout << "Mang ban dau: \n";
	Xuat(a, m, n);

	int c;
	cout << "\nNhap cot kiem tra: \n";
	cin >> c;

	cout << "\nSo luong cac so am tren cot la: " << DemAm(a, m, n, c);

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

int DemAm(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return 0;
	int dem = DemAm(a, m - 1, n, c);
	if (a[m - 1][c] <0)
		dem++;
	return dem;
}