#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int);
void Xuat(int[], int);
int ktGiam(int a[], int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int a[100];
	Nhap(a, n);
	Xuat(a, n);
	cout << "Mang co giam dan khong?: " << ktGiam(a, n);
	return 0;
}

void Nhap(int a[], int n)
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

int ktGiam(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	if (a[n - 2] >= a[n-1] && ktGiam(a,n-1))
		return 1;
	return 0;
	
}

