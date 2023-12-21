
#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int a[][100], int m, int n);
void Xuat(int a[][100], int m, int n);
int DemHoanThien(int a[][100], int m, int n,int d);
int ktHoanThien(int n);

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
	cout << "So luong so hoan thien tren dong "<<d<<" la: " << DemHoanThien(a, m, n,d);
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


int DemHoanThien(int a[][100], int m, int n,int d)
{
	if (n == 0)
		return 0;
	int dem = DemHoanThien(a, m, n - 1,d);
		if (ktHoanThien(a[d][n-1]))
			dem++;
	return dem;
}

int ktHoanThien(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			s += i;
	if (s == n)
		return 1;
	return 0;
}