
#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int a[][100], int m, int n);
void Xuat(int a[][100], int m, int n);
int TongDong(int a[][100], int m, int n, int d);


int main()
{
	int a[100][100], m, n;
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << endl;
	int d;
	cout << "Nhap dong: ";
	cin >> d;
	cout<<"Tong Dong la: "<<TongDong(a, m, n, d);
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
		cout << setw(8) << setprecision(4) << a[m - 1][j];
	cout << endl;
}


int TongDong(int a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	int s = TongDong(a,m, n-1,d);
	if (a[d][n - 1] % 2 == 0)
		s += a[m - 1][n - 1];
	return s;
}
