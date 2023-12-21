#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 200
using namespace std;


void Nhap(float[][MAX], int, int);
void Xuat(float[][MAX], int, int);
int ktDong1(float[][MAX], int, int, int);
int ktDong2(float[][MAX], int, int, int);
int ktDong3(float[][MAX], int, int, int);
void LietKe(float[][MAX], int, int);

int main()
{
	float a[MAX][MAX];
	int m, n, vtd;
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "\nCac dong thoa dieu kien la: ";
	LietKe(a, m, n);
	return 0;
}


void Nhap(float a[][MAX], int m, int n)
{
	srand(time(NULL));
	if (m == 0)
		return;
	Nhap(a, m - 1, n);
	for (int i = 0; i < n; i++)
		a[m - 1][i] = ((float)rand()/RAND_MAX) * 200 - 100;
}


void Xuat(float a[][MAX], int m, int n)
{
	if (m == 0)
		return;
	Xuat(a, m - 1, n);
	for (int i = 0; i < n; i++)
		cout << setw(10) <<fixed<<setprecision(2)<< a[m - 1][i];
	cout << endl;
}

int ktDong1(float a[][MAX], int m, int n, int d)
{
	if (n == 0)
		return 0;
	if (a[d][n - 1] < 0)
		return 1;
	return ktDong1(a, m, n - 1, d);
}
int ktDong2(float a[][MAX], int m, int n, int d)
{
	if (n == 0)
		return 0;
	if (a[d][n - 1] > 0)
		return 1;
	return ktDong2(a, m, n - 1, d);
}
int ktDong3(float a[][MAX], int m, int n, int d)
{
	if (n == 0)
		return 0;
	if (a[d][n - 1] == 0)
		return 1;
	return ktDong3(a, m, n - 1, d);
}

void LietKe(float a[][MAX], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	if (ktDong1(a, m, n, m - 1) == 1 &&
		ktDong2(a, m, n, m - 1) == 1 &&
		ktDong3(a, m, n, m - 1) == 1)
		cout << setw(4) << (m - 1);
}