#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 200
using namespace std;

void Nhap(float[][MAX], int, int);
void Xuat(float[][MAX], int, int);
float TongCot(float[][MAX], int, int, int);
float TongNhoNhat(float[][MAX], int, int);

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
	cout << "\nTong cot lon nhat: " << TongNhoNhat(a, m, n);
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

float TongCot(float a[][MAX], int m, int n, int vtc)
{
	if (m == 0)
		return 0;
	float s = TongCot(a, m-1, n, vtc);
	return s + a[m - 1][vtc];
}

float TongNhoNhat(float a[][MAX], int m, int n)
{
	if (n == 1)
		return TongCot(a, m, n, 0);
	float lc = TongNhoNhat(a, m, n - 1);
	if (TongCot(a, m, n, n - 1) > lc)
		lc = TongCot(a, m, n, n - 1);
	return lc;
}