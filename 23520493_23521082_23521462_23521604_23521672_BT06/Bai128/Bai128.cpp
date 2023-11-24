#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(float [], int);
void Xuat(float [], int);
float DuongNhoNhat(float a[], int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float a[100];
	Nhap(a, n);
	Xuat(a, n);
	cout << "So duong nho nhat trong mang thuc la: " << DuongNhoNhat(a, n);
	return 0;
}

void Nhap(float a[], int n)
{
	if (n == 0)
		return;
	srand(time(NULL));
	Nhap(a, n - 1);
	a[n - 1] = rand() / (RAND_MAX / 200.0) - 100.0;
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << setprecision(4) << a[i];
	cout << endl;
}

float DuongNhoNhat(float a[], int n)
{

	if (n == 0)
		return 0;
	float lc = DuongNhoNhat(a,n-1);
	if (a[n - 1] <= 0)
		return lc;
	if (lc == 0)
		return a[n - 1];
	if (a[n - 1] < lc)
		lc = a[n - 1];
	return lc;
}

