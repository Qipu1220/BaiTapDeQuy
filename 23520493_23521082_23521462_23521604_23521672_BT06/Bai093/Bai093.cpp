#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int);
void Xuat(float[], int);
int TongGiaTri(float a[], int n);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float a[100];
	Nhap(a, n);
	Xuat(a, n);
	cout << "Tong la: " << TongGiaTri(a, n);
	return 0;
}

void Nhap(float a[], int n)
{
	if (n == 0)
		return;
	srand(time(NULL));
	Nhap(a, n - 1);
	a[n - 1] = rand() / (RAND_MAX / 200.0) - 100;
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[i];
	cout << endl;
}

int TongGiaTri(float a[], int n)
{
	if (n <= 1)
		return 0;
	float s = TongGiaTri(a, n - 1);
	if (a[n-1] > a[n-2])
		s += a[n - 1];
	return s;
}