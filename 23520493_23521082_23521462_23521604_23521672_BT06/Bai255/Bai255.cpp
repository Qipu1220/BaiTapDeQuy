#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int ktToanDuong(float[][100], int, int);

int main()
{
	int m, n;
	float a[100][100];
	Nhap(a, m, n);
	cout << "Mang ban dau: \n";
	Xuat(a, m, n);

	cout << "\nKiem tra toan duong: " << ktToanDuong(a, m, n);

	return 0;
}

void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

void Xuat(float a[][100], int m, int n)
{
	if (m == 0)
		return;
	Xuat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		cout << setw(8) << a[m - 1][j];
	cout << endl;
}

int ktToanDuong(float a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	if (m == 1)
	{
		int flag = 1;
		for (int j = 0; j < n; j++)
			if (a[0][j] <= 0)
				flag = 0;
		return flag;
	}
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] <= 0)
			return 0;
	return ktToanDuong(a, m - 1, n);
}