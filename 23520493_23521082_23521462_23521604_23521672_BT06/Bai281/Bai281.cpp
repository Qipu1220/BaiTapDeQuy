#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 200
using namespace std;


void Nhap(float[][MAX], int, int);
void Xuat(float[][MAX], int, int);
float LonNhatCot(float[][MAX], int, int, int);
void ThemDong(float[][MAX], int&, int);


int main()
{
	float a[MAX][MAX];
	int m, n;
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "\nThem dong: " << endl;
	ThemDong(a, m, n);
	Xuat(a, m, n);
	return 0;
}

void Nhap(float a[][MAX], int m, int n)
{
	srand(time(NULL));
	if (m == 0)
		return;
	Nhap(a, m - 1, n);
	for (int i = 0; i < n; i++)
		a[m - 1][i] = ((float)rand() / RAND_MAX) * 200 - 100;
}


void Xuat(float a[][MAX], int m, int n)
{
	if (m == 0)
		return;
	Xuat(a, m - 1, n);
	for (int i = 0; i < n; i++)
		cout << setw(10) << fixed << setprecision(2) << a[m - 1][i];
	cout << endl;
}



float LonNhatCot(float a[][MAX], int m, int n, int vtc)
{
	if (m == 1)
		return a[0][vtc];
	float lc = LonNhatCot(a, m - 1, n, vtc);
	if (a[m - 1][vtc] > lc)
		lc = a[m - 1][vtc];
	return lc;
}

void ThemDong(float a[][MAX], int& m, int n)
{
	if (n == 0)
	{
		m++;
		return;
	}
	ThemDong(a, m, n-1);
	a[m - 1][n - 1] = LonNhatCot(a, m-1, n, n - 1);
}