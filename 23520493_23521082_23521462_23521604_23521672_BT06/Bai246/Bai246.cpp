#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 200
using namespace std;

void Nhap(int[][MAX], int, int);
void Xuat(int[][MAX], int, int);
int ChanLonNhat(int[][MAX], int, int);

int main()
{
	int a[MAX][MAX], m, n;
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "\nChan lon nhat: " << ChanLonNhat(a, m, n);
	return 0;
}

void Nhap(int a[][MAX], int m, int n)
{
	srand(time(NULL));
	if (m == 0)
		return;
	Nhap(a, m - 1, n);
	for (int i = 0; i < n; i++)
		a[m - 1][i] = rand() % 201 - 100;
}

void Xuat(int a[][MAX], int m, int n)
{
	if (m == 0)
		return;
	Xuat(a, m - 1, n);
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[m - 1][i];
	cout << endl;
}

int ChanLonNhat(int a[][MAX], int m, int n)
{
	if (m == 0)
		return -1;
	int lc = ChanLonNhat(a, m - 1, n);
	for (int i = 0; i < n; i++)
	{
		if (a[m - 1][i] % 2 == 0)
			if (lc == -1 || a[m - 1][i] > lc)
				lc = a[m - 1][i];
	}
	return lc;
}