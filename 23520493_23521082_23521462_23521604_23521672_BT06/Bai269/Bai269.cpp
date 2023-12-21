#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(int[][100], int, int);
void Xuat(int[][100], int, int);
void HoanViCot(int[][100], int, int, int, int);

int main()
{
	int a[100][100];
	int m, n,c1,c2;
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	Nhap(a, m, n);
	cout << "\nMa tran ban dau la: " << endl;
	Xuat(a, m, n);
	cout << "\nNhap cot 1: ";
	cin >> c1;
	cout << "\nNhap cot 2: ";
	cin >> c2;
	HoanViCot(a, m, n,c1,c2);
	Xuat(a, m, n);
	return 0;
}
void Nhap(int a[][100], int m, int n)
{
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = rand() % (200 + 1) - 100;
}
void Xuat(int a[][100], int m, int n)
{
	if (m == 0)
		return;
	Xuat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		cout << setw(4) << a[m - 1][j];
	cout << endl;
}
void HoanViCot(int a[][100], int m, int n, int c1, int c2)
{
	if (m == 0)
		return;
	HoanViCot(a, m-1, n,c1,c2);
	swap(a[m - 1][c1], a[m - 1][c2]);
}