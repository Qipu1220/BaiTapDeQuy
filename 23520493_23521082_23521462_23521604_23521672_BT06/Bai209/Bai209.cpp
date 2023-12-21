#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(int[][100], int, int);
void Xuat(int[][100], int, int);
int Tong3m(int[][100], int, int);

int main()
{
	int a[100][100], m, n;
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap vao so cot: ";
	cin >> n;
	Nhap(a, m, n);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(a, m, n);
	cout << "Tong la: " << Tong3m(a, m, n);
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
bool KT3m(int n)
{
	if (n < 1)
		return false;
	while (n % 3 == 0)
		n = n / 3;
	return n == 1;
}
int Tong3m(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int s = Tong3m(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (KT3m(a[m - 1][j]))
			s = s + a[m - 1][j];
	return s;
}