#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(int[][100], int, int);
void Xuat(int[][100], int, int);
int TichChan(int[][100], int, int, int);

int main()
{
	int a[100][100], m, n, d;
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap vao so cot: ";
	cin >> n;
	Nhap(a, m, n);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(a, m, n);
	cout << "\nNhap cot d: ";
	cin >> d;
	cout << "Tich la: " << TichChan(a, m, n, d);
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
int TichChan(int a[][100], int m, int n, int d)
{
	if (m == 0)
		return 1;
	int t = TichChan(a, m-1, n, d);
	if (a[m-1][d]%2==0)
		t = t * a[m-1][d];
	return t;
}