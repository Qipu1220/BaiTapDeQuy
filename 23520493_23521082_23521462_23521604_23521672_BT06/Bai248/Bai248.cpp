
#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int a[][100], int m, int n);
void Xuat(int a[][100], int m, int n);
int NguyenToLonNhat(int a[][100], int m, int n);
int ktNguyenTo(int n);

int main()
{
	int a[100][100], m, n;
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	Nhap(a, m, n);
	Xuat(a, m, n);

	cout << "So nguyen to lon nhat la: " << NguyenToLonNhat(a, m, n);
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


int NguyenToLonNhat(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int lc = NguyenToLonNhat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktNguyenTo(a[m - 1][j]) && a[m - 1][j] > lc)
			lc = a[m - 1][j];
	return lc;
}

int ktNguyenTo(int n)
{
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return 0;
}