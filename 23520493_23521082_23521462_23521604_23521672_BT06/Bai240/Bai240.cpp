#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int ChanDau(int[][100], int, int);

int main()
{
	int m, n;
	int a[100][100];
	Nhap(a, m, n);
	cout << "Mang ban dau: \n";
	Xuat(a, m, n);

	cout << "\nChan dau: " << ChanDau(a, m, n);

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

int ChanDau(int a[][100], int m, int n)
{
	if (m == 0)
		return -1;
	int lc = ChanDau(a, m - 1, n);
	if (lc != -1)
		return lc;
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] % 2 == 0)
			return a[m - 1][j];
	return -1;
}