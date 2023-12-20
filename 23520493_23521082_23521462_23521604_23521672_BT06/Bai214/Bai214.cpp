#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(int[][100], int, int);
void Xuat(int[][100], int, int);
int TongDong(int[][100], int, int, int);

int main()
{
	int a[100][100], m, n,d;
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap vao so cot: ";
	cin >> n;
	Nhap(a, m, n);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(a, m, n);
	cout << "\nNhap dong d: ";
	cin >> d;
	cout << "Tong la: " << TongDong(a, m, n,d);
	return 0;
}
void Nhap(int a[][100], int m, int n)
{
	if (m == 0)
		return;
	Nhap(a, m - 1, n);
	for (int j = 0; j < n; j++)
	{
		cin >> a[m - 1][j];
	}
}
void Xuat(int a[][100], int m, int n)
{
	if (m == 0)
		return;
	Xuat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		cout << setw(4) << a[m - 1][j];
	cout << endl;
}
bool KTCP(int n)
{
	int t = sqrt(n);
	return t * t == n;
}
int TongDong(int a[][100], int m, int n,int d)
{
	if (n == 0)
		return 0;
	int s = TongDong(a, m, n-1,d);
		if (KTCP(a[d][n-1]))
			s = s + a[d][n-1];
	return s;
}