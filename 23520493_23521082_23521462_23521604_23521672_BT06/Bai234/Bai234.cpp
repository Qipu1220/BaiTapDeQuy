#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(int[][100], int, int);
void Xuat(int[][100], int, int);
int DemToanChan(int[][100], int, int, int);

int main()
{
	int a[100][100];
	int m, n,d;
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	Nhap(a, m, n);
	cout << "\nMa tran ban dau la: " << endl;
	Xuat(a, m, n);
	cout << "Nhap dong can tinh: ";
	cin >> d;
	cout << "So luong so nguyen toan le tren 1 dong la: " << DemToanChan(a, m, n,d) << endl;
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
bool KTTL(int n)
{
	int t = n;
	int dv;
	if (n % 2 == 0)
		return false;
	while (t != 0)
	{
		dv = t % 10;
		t = t / 10;
	}
	if (dv % 2 == 0)
		return false;
	else
		return true;
}
int DemToanChan(int a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	int dem = DemToanChan(a, m, n-1,d);
		if (KTTL(a[d][n-1]))
			dem++;
	return dem;

}