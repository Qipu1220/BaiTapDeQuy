#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float TongDuong(float[][100], int, int);

int main()
{
	int m, n;
	float a[100][100];
	Nhap(a, m, n);
	cout << "Mang ban dau: \n";
	Xuat(a, m, n);

	cout << "\nTong duong: " << TongDuong(a, m, n);

	return 0;
}

void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = (float)rand()/RAND_MAX*200 - 100;
}

void Xuat(float a[][100], int m, int n)
{
	if (m == 0)
		return;
	Xuat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		cout <<fixed<<setprecision(2)<<setw(8) << a[m - 1][j];
	cout << endl;
}

float TongDuong(float a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	float s = TongDuong(a, m - 1, n);
	for (int i = 0; i < n; i++)
		if (a[m - 1][i] > 0)
			s = s + a[m - 1][i];
	return s;
}