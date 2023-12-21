#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(float[][100], int, int);
void Xuat(float[][100], int, int);
float LonNhat(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n;
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap vao so cot: ";
	cin >> n;
	Nhap(a, m, n);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(a, m, n);
	cout << "Dap an la: " << setprecision(3) << LonNhat(a, m, n);
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
float LonNhat(float a[][100], int m, int n)
{
	if (m == 1)
	{
		float ln = a[0][0];
		for (int j = 0; j < n; j++)
			if (a[0][j] > ln)
				ln = a[0][j];
		return ln;
	}
	float ln = LonNhat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] > ln)
			ln = a[m - 1][j];
	return ln;

}