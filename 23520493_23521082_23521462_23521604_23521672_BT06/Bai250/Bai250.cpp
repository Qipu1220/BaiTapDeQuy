#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float TongDong(float[][100], int, int, int);
float TongLonNhat(float[][100], int, int);

int main()
{
	int m, n;
	float a[100][100];
	Nhap(a, m, n);
	cout << "Mang ban dau: \n";
	Xuat(a, m, n);

	cout << "\nTong dong lon nhat: " << TongLonNhat(a, m, n);

	return 0;
}

void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

void Xuat(float a[][100], int m, int n)
{
	if (m == 0)
		return;
	Xuat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		cout << setw(8) << a[m - 1][j];
	cout << endl;
}

float TongDong(float a[][100], int m, int n,int d)
{
	if (n == 0)
		return 0;
	return TongDong(a, m, n - 1, d) + a[d][n - 1];
}

float TongLonNhat(float a[][100], int m, int n)
{
	if (m == 1)
		return TongDong(a, m, n, 0);
	float lc = TongLonNhat(a, m - 1, n);
	if (TongDong(a, m, n, m - 1) > lc)
		lc = TongDong(a, m, n, m - 1);
	return lc;
}