#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(int[][100], int, int);
void Xuat(int[][100], int, int);
int ChinhPhuongLonNhat(int[][100], int, int);

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
	cout << "So chinh phuong lon nhat la: " << ChinhPhuongLonNhat(a, m, n) << endl;
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
int ChinhPhuongLonNhat(int a[][100], int m, int n)
{
	if (m == 0)
		return -1;
	int ln = ChinhPhuongLonNhat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (KTCP(a[m - 1][j]))
			if (ln == -1 || a[m - 1][j] > ln)
				ln = a[m - 1][j];
	return ln;

}