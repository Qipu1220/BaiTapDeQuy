#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(int[][100], int, int);
void Xuat(int[][100], int, int);
void LietKe(int[][100], int, int, int);

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
	cout << "\nCac so co dang la: ";
	LietKe(a, m, n,d);
	return 0;
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
		cout << setw(4) << a[m - 1][j];
	cout << endl;
}
bool KT3m(int n) 
{
	if (n < 1)
		return false;
	while (n % 3 == 0)
		n = n / 3;
	return n == 1;
}
void LietKe(int a[][100], int m, int n, int d)
{
	if (n == 0)
		return;
	LietKe(a, m, n-1,d);
	if (KT3m(a[d][n-1]))
		cout << setw(4) << setprecision(3) << a[d][n-1];
}