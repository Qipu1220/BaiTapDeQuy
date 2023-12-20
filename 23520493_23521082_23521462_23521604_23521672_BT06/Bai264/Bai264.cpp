#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(int[][100], int, int);
void Xuat(int[][100], int, int);
int KTCot(int[][100], int, int, int);
void LietKe(int[][100], int, int);

int main()
{
	int a[100][100];
	int m, n,c;
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	Nhap(a, m, n);
	cout << "\nMa tran ban dau la: " << endl;
	Xuat(a, m, n);
	cout << "Cac cot do la: ";
	LietKe(a, m, n);
	return 0;
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
		cout << setw(4) << a[m - 1][j];
	cout << endl;
}
bool KTCP(int n)
{
	int t = sqrt(n);
	return t * t == n;
}
int KTCot(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return 0;
	if (KTCP(a[m - 1][c]))
		return 1;
	return KTCot(a, m - 1, n, c);
}
void LietKe(int a[][100], int m, int n)
{
	if (n == 0)
		return;
	LietKe(a, m, n - 1);
	if (KTCot(a, m, n, n - 1) == 1)
		cout <<setw(4)<< (n - 1);
}