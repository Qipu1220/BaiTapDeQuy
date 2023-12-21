#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int ktDongGiam(float[][100], int, int, int);
void LietKe(float[][100], int, int);

int main()
{
	int m, n;
	float a[100][100];
	Nhap(a, m, n);
	cout << "Mang ban dau: \n";
	Xuat(a, m, n);

	cout << "\nCac dong giam dan: \n";
	LietKe(a, m, n);

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

int ktDongGiam(float a[][100], int m, int n,int d)
{
	if (n == 1)
		 return 1;
	if (a[d][n - 2] >= a[d][n - 1] && ktDongGiam(a, m, n - 1, d) == 1)
		return 1;
	 return 0;
}

void LietKe(float a[][100], int m, int n)
 {
	 if (m == 0)
		 return;
	 LietKe(a, m - 1, n);
	 if (ktDongGiam(a, m, n, m - 1) == 1)
		 cout << setw(4) << (m - 1);
 }