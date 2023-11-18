#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktHoanThien(int);
int HoanThienCuoi(int[], int);

int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	cout << "Mang ban dau: \n";
	Xuat(a, n);

	cout << "\nSo hoan thien cuoi cung: " << HoanThienCuoi(a, n);

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
	cout << setw(10) << fixed << setprecision(2) << a[n - 1];
}

bool ktHoanThien(int x)
{
	int s = 0;
	for (int i = 1; i < x; i++)
		if (x % i == 0)
			s = s + i;
	return(s == x);
}

int HoanThienCuoi(int a[], int n)
{
	if (n == 0)
		return -1;
	if (ktHoanThien(a[n - 1]))
		return a[n - 1];
	int lc = HoanThienCuoi(a, n - 1);
	if (lc != -1)
		return lc;
	return -1;
}