
#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int a[][100], int m, int n);
void Xuat(int a[][100], int m, int n);
void LietKe(int a[][100], int m, int n, int d);
int ktDang5m(int n);


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
	int d;
	cout << "Nhap cot: ";
	cin >> d;
	LietKe(a, m, n, d);
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


void LietKe(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return;
	LietKe(a, m-1, n , c);
	if (ktDang5m(a[m-1][c]))
		cout << setw(8) << setprecision(4) << a[m-1][c];
}
int ktDang5m(int n)
{
	while (n > 1)
	{
		if (n % 5 != 0)
			return 0;
		n /= 5;
	}
	return 1;
}