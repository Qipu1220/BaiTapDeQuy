#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(float[][100], int, int);
void Xuat(float[][100], int, int);
int KTDong(float[][100], int, int, int);
void LietKe(float[][100], int, int);

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
	LietKe(a, m, n);
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
int KTDong(float a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	if (a[d][n - 1] < 0)
		return 1;
	return KTDong(a, m, n - 1, d);
}
void LietKe(float a[][100], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	if (KTDong(a, m, n, m - 1) == 1)
	{
		cout << "\nDong co so am la: ";
		cout << setw(4) << (m - 1);
	}
}