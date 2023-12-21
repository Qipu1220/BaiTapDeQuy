#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(int[][100], int, int);
void Xuat(int[][100], int, int);
int TongChan(int[][100], int, int);

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
	cout << "Tong la: "<<TongChan(a, m, n);
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
int TongChan(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int s=TongChan(a, m-1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] % 2 == 0)
			s = s + a[m - 1][j];
	return s;
}