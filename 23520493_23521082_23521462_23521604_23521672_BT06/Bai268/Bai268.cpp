#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int a[][100], int m, int n);
void Xuat(int a[][100], int m, int n);
void HoanViDong(int a[][100], int m, int n,int d1,int d2);

int main()
{
	int a[100][100], m, n;
	int b[100][100];
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	int d1, d2;
	cin >> d1 >> d2;
	cout << "Ma tran sau khi duoc xay dung: " << endl;
	HoanViDong(a, m, n,d1,d2);
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


void HoanViDong(int a[][100], int m, int n,int d1,int d2)
{
	if (n == 0)
		return;
	HoanViDong(a, m, n - 1, d1, d2);
		swap(a[d1][n-1] , a[d2][n-1]);
}

