#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
#define MAX 200

void Nhap(int[][MAX], int, int);
void Xuat(int[][MAX], int, int);
void LietKe(int[][MAX], int, int);


int main()
{
	int a[MAX][MAX], n, m;
	cout << "Nhap so hang: ";
	cin >> n;
	cout << "Nhap so cot: ";
	cin >> m;
	Nhap(a, m,n);
	Xuat(a, m,n);
	cout << "\nCac gia tri chan: " << endl;
	LietKe(a,m,n);
	return 0;
}

void Nhap(int a[][MAX], int m, int n)
{
	srand(time(NULL));
	if (m == 0)
		return;
	Nhap(a, m-1, n);
	for (int i = 0; i < n; i++)
	{
		a[m-1][i] = rand() % 201 - 100;
	}
}

void Xuat(int a[][MAX], int m, int n)
{
	if (m == 0)
		return;
	Xuat(a, m-1, n);
	for (int i = 0; i < n; i++)
	{
		cout << setw(6) << a[m-1][i];
	}
	cout << endl;
}

void LietKe(int a[][MAX], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a,m-1, n);
	for (int i = 0; i < n; i++)
	{
		if (a[m-1][i] % 2 == 0)
			cout << setw(7) << a[m-1][i];
	}
}