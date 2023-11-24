#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int a[][100], int m, int n);
void Xuat(int a[][100], int m, int n);
void XoaCot(int a[][100], int m, int& n, int c);

int main()
{
	int a[100][100], m, n;
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	int c;
	cout << "Nhap cot: ";
	cin >> c;
	cout << "Ma tran sau khi bi xoa cot "<<c<<" la: " << endl;
	XoaCot(a, m, n, c);
	Xuat(a, m, n);
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


void XoaCot(int a[][100], int m, int& n, int c)
{
	if (m==0)
	{
		n--;
		return;
	}
	for(int i=c;i<n-1;i++)
		a[m - 1][i] = a[m - 1][i + 1];
	XoaCot(a, m - 1, n, c);
}

