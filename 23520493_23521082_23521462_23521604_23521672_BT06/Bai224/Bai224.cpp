#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(float[][100], int, int);
void Xuat(float[][100], int, int);
float TichCot(float[][100], int, int, int);

int main()
{
	float a[100][100];
	int m, n, d;
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap vao so cot: ";
	cin >> n;
	Nhap(a, m, n);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(a, m, n);
	cout << "\nNhap cot d: ";
	cin >> d;
	cout << "Tich la: " << setprecision(3)<<TichCot(a, m, n, d);
	return 0;
}
void Nhap(float a[][100], int m, int n)
{
	if (m == 0)
		return;
	Nhap(a, m - 1, n);
	for (int j = 0; j < n; j++)
	{
		cin >> a[m - 1][j];
	}
}
void Xuat(float a[][100], int m, int n)
{
	if (m == 0)
		return;
	Xuat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		cout << setw(4) << a[m - 1][j];
	cout << endl;
}
float TichCot(float a[][100], int m, int n, int d)
{
	if (m == 0)
		return 1;
	int t = TichCot(a, m - 1, n, d);
	if (a[m-1][d]>=-1 && a[m-1][d]<=0)
		t = t * a[m - 1][d];
	return t;
}