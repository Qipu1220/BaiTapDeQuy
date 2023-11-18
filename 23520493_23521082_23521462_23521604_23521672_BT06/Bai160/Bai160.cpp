#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void HoanVi(float&, float&);
void DuongTangAmGiam(float[], int);

int main()
{
	int n;
	float a[100];
	Nhap(a, n);
	cout << "Mang ban dau: \n";
	Xuat(a, n);

	DuongTangAmGiam(a, n);
	cout << "\nMang sau khi sap: \n";
	Xuat(a, n);

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = (float)rand() / RAND_MAX * 200 - 100;
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(10) << fixed << setprecision(2) << a[n - 1];
}

void HoanVi(float& x, float& y)
{
	float temp;
	temp = x;
	x = y;
	y = temp;
}

void DuongTangAmGiam(float a[], int n)
{
	if (n == 0)
		return;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0 && a[n - 1] > 0 && a[i] > a[n - 1])
			HoanVi(a[i], a[n - 1]);
		if (a[i] < 0 && a[n - 1] < 0 && a[i] < a[n - 1])
			HoanVi(a[i], a[n - 1]);
	}
	DuongTangAmGiam(a, n-1);
}