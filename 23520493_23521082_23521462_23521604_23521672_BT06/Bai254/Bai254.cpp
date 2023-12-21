#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(int[][100], int, int);
void Xuat(int[][100], int, int);
int KTHoanThien(int[][100], int, int);

int main()
{
	int a[100][100];
	int m, n;
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	Nhap(a, m, n);
	cout << "\nMa tran ban dau la: " << endl;
	Xuat(a, m, n);
	int kq=KTHoanThien(a, m, n);
	if (kq == 1)
		cout << "Co ton tai so hoan thien.";
	else
		cout << "Khong ton tai so hoan thien.";
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
bool KTHT(int n)
{
	int s = 1;
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			s = s + i;
	return s == n;
}
int KTHoanThien(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	for (int j = 0; j < n; j++)
		if (KTHT(a[m - 1][j]))
			return 1;
	return KTHoanThien(a,m-1,n);

}