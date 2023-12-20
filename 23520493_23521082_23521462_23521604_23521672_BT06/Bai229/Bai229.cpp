#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(int[][100], int, int);
void Xuat(int[][100], int, int);
int DemToanChan(int[][100], int, int);

int main()
{
	int a[100][100];
	int m,n;
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	Nhap(a, m, n);
	cout << "\nMa tran ban dau la: "<<endl;
	Xuat(a, m, n);
	cout << "So luong so nguyen toan chan la: " << DemToanChan(a, m, n)<<endl;
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
		cout <<setw(4)<< a[m - 1][j];
	cout << endl;
}
bool KTTC(int n)
{
	int t = n;
	int dv;
	if (n % 2 != 0)
		return false;
	while (t != 0)
	{
		dv = t % 10;
		t = t / 10;
	}
	if (dv % 2 != 0)
		return false;
	else
		return true;
}
int DemToanChan(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int dem=DemToanChan(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (KTTC(a[m - 1][j]))
			dem++;
	return dem;

}