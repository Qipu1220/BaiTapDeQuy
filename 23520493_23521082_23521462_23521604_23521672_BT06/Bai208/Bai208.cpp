
#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int a[][100], int m, int n);
void Xuat(int a[][100], int m, int n);
int TongToanChan(int a[][100], int m, int n);
int ktToanChan(int n);


int main()
{
	int a[100][100], m, n;
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << endl;
	cout<<"Tong toan chan la: "<<TongToanChan(a, m, n);
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
		cout << setw(8) << setprecision(4) << a[m - 1][j];
	cout << endl;
}


int TongToanChan(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int s = TongToanChan(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktToanChan(a[m - 1][j]))
			s += a[m - 1][j];
	return s;
}
int ktToanChan(int n)
{
	if (n == 0)
		return 1;
	int flag = ktToanChan(n / 10);
		if (n % 2 != 0)
			return 0;
	return flag;
}