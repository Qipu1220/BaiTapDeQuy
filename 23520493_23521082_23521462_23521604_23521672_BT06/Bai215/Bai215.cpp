#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int TongDoiXung(int[][100], int, int, int);
bool ktDoiXung(int);

int main()
{
	int m, n;
	int a[100][100];
	Nhap(a, m, n);
	cout << "Mang ban dau: \n";
	Xuat(a, m, n);

	int d;
	cout << "\nNhap dong kiem tra: \n";
	cin >> d;

	cout << "\nTong cac so doi xung tren dong: " << TongDoiXung(a, m, n, d);

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

bool ktDoiXung(int x)
{
	int dn = 0;
	for (int i = abs(x); i != 0; i = i / 10)
	{
		int dv = i % 10;
		dn = dn * 10 + dv;
	}
	return (dn==abs(x));
}

int TongDoiXung(int a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	int s=TongDoiXung(a, m, n - 1, d);
		if (ktDoiXung(a[d][n-1]))
			s = s + a[d][n-1];
	return s;
}