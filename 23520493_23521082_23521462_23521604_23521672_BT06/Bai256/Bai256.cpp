#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 200
using namespace std;


void Nhap(float[][MAX], int, int);
void Xuat(float[][MAX], int, int);
int ktDongTang(float[][MAX], int, int, int);


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
	cout << "\nNhap dong can kiem tra: ";
	cin >> vtd;
	cout <<endl<< ktDongTang(a, m, n, vtd);
	return 0;
}


void Nhap(float a[][MAX], int m, int n)
{
	srand(time(NULL));
	if (m == 0)
		return;
	Nhap(a, m - 1, n);
	for (int i = 0; i < n; i++)
		a[m - 1][i] = rand() % 201 - 100;
}


void Xuat(float a[][MAX], int m, int n)
{
	if (m == 0)
		return;
	Xuat(a, m - 1, n);
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[m - 1][i];
	cout << endl;
}

int ktDongTang(float a[][MAX], int m, int n, int vtd)
{
	if (n == 1)
		return 1;
	if (a[vtd][n - 2] <= a[vtd][n - 1] && ktDongTang(a, m, n - 1, vtd) == 1)
		return 1;
	return 0;
}

