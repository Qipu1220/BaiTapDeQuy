#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(int[][100], int, int);
void Xuat(int[][100], int, int);
void LietKe(int[][100], int,int);

int main()
{
	int a[100][100], m,n;
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap vao so cot: ";
	cin >> n;
	Nhap(a,m,n);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(a,m, n);
	cout << "\nCac so chinh phuong la: ";
	LietKe(a,m, n);
	return 0;
}
void Nhap(int a[][100],int m, int n)
{
	srand(time(NULL));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % (200 + 1) - 100;
		}
	}
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
bool KTChinhPhuong(int n) {
	int t = sqrt(n);
	return t * t == n;
}
void LietKe(int a[][100], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (KTChinhPhuong(a[m-1][j]))
			cout << setw(8)<<setprecision(3) << a[m - 1][j];
}