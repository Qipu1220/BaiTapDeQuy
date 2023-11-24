#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int);
void Xuat(int[], int);
int TimUCLN(int a[], int);
int ucln(int , int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int a[100];
	Nhap(a, n);
	Xuat(a, n);
	cout << "UCLN cua tat ca cac phan tu trong mang la: " << TimUCLN(a, n);
	return 0;
}

void Nhap( int a[], int n)
{
	if (n == 0)
		return;
	srand(time(NULL));
	Nhap(a, n - 1);
	a[n - 1] = rand() / (RAND_MAX / 200.0);
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << setprecision(4) << a[i];
	cout << endl;
}

int ucln(int a, int b)
{
	while (a * b != 0)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a + b;
}

int TimUCLN(int a[], int n)
{
	if (n == 1)
		return a[0];
	int lc = TimUCLN(a, n - 1);
	int UCLN = ucln(lc, a[n - 1]);
	return UCLN;
}

