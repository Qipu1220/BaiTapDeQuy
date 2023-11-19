#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void LietKe(int[][100], int, int,int);
bool ktHoanThien(int);

int main()
{
	int m, n;
	int a[100][100];
	Nhap(a, m, n);
	cout << "Mang ban dau: \n";
	Xuat(a, m, n);

	int d;
	cout << "\nNhap dong kiem tra: \n";
	cin >> d;

	cout << "\nCac so hoan thien:\n";
	LietKe(a, m, n,d);

	return 0;
}

void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = rand() % 201 - 100;
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

bool ktHoanThien(int x)
{
	int s = 0;
	for (int i = 1; i < x; i++)
		if (x % i == 0)
			s = s + i;
	return (s == x);
}

void LietKe(int a[][100], int m, int n,int d)
{
	if (n == 0)
		return;
	LietKe(a, m, n-1,d);
	if (ktHoanThien(a[d][n - 1]))
		cout << setw(8) << a[d][n - 1];
}