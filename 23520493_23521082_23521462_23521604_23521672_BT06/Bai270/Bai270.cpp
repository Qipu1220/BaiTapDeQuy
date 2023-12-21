#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void HoanVi(float&, float&);
void SapDongTang(float[][100], int, int,int);

int main()
{
	int m, n;
	float a[100][100];
	Nhap(a, m, n);
	cout << "Mang ban dau: \n";
	Xuat(a, m, n);

	int d;
	cout << "\nNhap dong can sap: ";
	cin>>d;

	cout << "\nCac dong giam dan: \n";
	SapDongTang(a, m, n, d);
	Xuat(a, m, n);

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

void HoanVi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}

void SapDongTang(float a[][100], int m, int n, int d)
{
	if (n == 1)
		return;
	 for (int j = 0; j <= n - 2; j++)
		 if (a[d][j] > a[d][n - 1])
			 HoanVi(a[d][j], a[d][n - 1]);
	 SapDongTang(a, m, n - 1, d);
}