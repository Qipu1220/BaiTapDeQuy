#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(float[][100], int, int);
void Xuat(float[][100], int, int);
float NhoNhat(float[][100], int, int, int);

int main()
{
	float a[100][100];
	int m, n,d;
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap vao so cot: ";
	cin >> n;
	Nhap(a, m, n);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(a, m, n);
	cout << "Nhap cot muon tinh: ";
	cin >> d;
	cout << "Dap an la: " << setprecision(3) << NhoNhat(a, m, n,d);
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
float NhoNhat(float a[][100], int m, int n,int d)
{
	if (m == 1)
		return a[0][d];
	float ln = NhoNhat(a, m - 1, n,d);
		if (a[m - 1][d] < ln)
			ln = a[m - 1][d];
	return ln;

}