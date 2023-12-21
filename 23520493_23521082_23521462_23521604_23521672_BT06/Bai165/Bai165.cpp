#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int, int, int);
void LietKe(int[], int, int);
void LietKe(int[], int);

int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	cout << "Mang ban dau: \n";
	Xuat(a, n);

	cout << "\nLiet ke mang con: \n";
	LietKe(a, n);

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 201 - 100;
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(10)  << a[n - 1];
}

void LietKe(int a[], int n, int vt, int l)
{
	if (l == 0)
		return;
	LietKe(a, n, vt, l - 1);
	cout << setw(10) << a[vt + l - 1];
}

void LietKe(int a[], int n, int l)
{
	if (n < l)
		return;
	LietKe(a, n - 1, l);
	LietKe(a, n, n - l, l);
}

void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	for (int l = 1; l <= n; l++)
	{
		LietKe(a, n, n-l,l);
		cout << endl;
	}
}