#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int DemChinhPhuong(int[][100], int, int);
bool ktChinhPhuong(int);

int main()
{
	int m, n;
	int a[100][100];
	Nhap(a, m, n);
	cout << "Mang ban dau: \n";
	Xuat(a, m, n);

	cout << "\nSo luong so chinh phuong: " << DemChinhPhuong(a, m, n);

	return 0;
}

void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

void Xuat(int a[][100], int m, int n)
{
	if (m == 0)
		return;
	Xuat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		cout << setw(8) << a[m - 1][j];
	cout << endl;
}

bool ktChinhPhuong(int x)
{
	for (int i = 0; i <= x; i++)
		if (i * i == x)
			return true;
	return false;
}

int DemChinhPhuong(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int dem = DemChinhPhuong(a, m-1, n);
	for(int j=0;j<n;j++)
		if (ktChinhPhuong(a[m - 1][j]))
			dem++;
	return dem;
}