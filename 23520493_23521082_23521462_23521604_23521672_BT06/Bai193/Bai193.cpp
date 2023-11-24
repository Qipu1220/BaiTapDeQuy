
#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int a[][100],int m, int n);
void Xuat(int a[][100],int m, int n);
void LietKe(int a[][100], int m, int n);


int main()
{
	int a[100][100], m,n;
	cin >> m>>n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << endl;
	LietKe(a, 2, n);
}
void Nhap(int a[][100],int m, int n)
{
	if (m == 0)
		return;
	 
	Nhap(a, m - 1, n);
	for(int j=0;j<n;j++)
		cin>>a[m - 1][j] ;
}

void Xuat(int a[][100],int m, int n)
{
	if (m == 0)
		return;
	Xuat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		cout << setw(8) << setprecision(4) << a[m-1][j];
	cout << endl;
}
	

void LietKe(int a[][100], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	if (m - 1 % 2 != 0)
		return;
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] % 2 != 0)
			cout << setw(8) << setprecision(4) << a[m - 1][j];
}