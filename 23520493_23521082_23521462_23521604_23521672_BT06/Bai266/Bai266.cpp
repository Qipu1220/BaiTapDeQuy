#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 200
using namespace std;


void Nhap(float[][MAX], int, int);
void Xuat(float[][MAX], int, int);
int ktCotTang(float[][MAX], int, int, int);
void LietKe(float[][MAX], int, int);


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
	cout << "Cac cot co gia tri tang dan: ";
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

int ktCotTang(float a[][MAX], int m, int n, int vtc)
{
	if (m == 1)
		return 1;
	if (a[m - 2][vtc] <= a[m - 1][vtc] && ktCotTang(a, m - 1, n, vtc))
		return 1;
	return 0;
}

void LietKe(float a[][MAX], int m, int n)
{
	if (n == 0)
		return;
	LietKe(a, m, n - 1);
	if (ktCotTang(a, m, n, n - 1) == 1)
		cout << setw(4) << n - 1;
}

