
#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int a[][100], int m, int n);
void Xuat(int a[][100], int m, int n);
int DemHoanThien(int a[][100], int m, int n);
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
	cout << "So luong so hoan thien la: " << DemHoanThien(a, m, n);
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


int DemHoanThien(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int dem = DemHoanThien(a, m - 1, n);
	for(int j=0;j<n;j++)
		if (ktHoanThien(a[m - 1][j]))
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