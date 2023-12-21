#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 200
using namespace std;


void Nhap(float[][MAX], int, int);
void Xuat(float[][MAX], int, int);
float DuongDau(float[][MAX], int, int);

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
	cout << "\nGia tri duong dau trong ma tran: " <<fixed<<setprecision(2)<< DuongDau(a, m, n);
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
	{
		cout << setw(10) <<fixed<< setprecision(2)<< a[m - 1][i];
	}
	cout << endl;
}

float DuongDau(float a[][MAX], int m, int n)
{
	if (m == 0)
		return -1;
	float lc = DuongDau(a, m - 1, n);
	if (lc != -1)
		return lc;
	for (int j = 0; j < n; j++)
	{
		if (a[m - 1][j] > 0)
			return a[m - 1][j];
	}
	return -1;
}