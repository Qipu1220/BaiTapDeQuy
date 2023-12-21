#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float Tong(float[], int);



int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nTong cac phan tu: " << fixed << setprecision(3) << Tong(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = (((float)rand() / RAND_MAX) * 200) - 100;
	}
}

void Xuat(float a[], int n)
{
	if (n == 0)
	{
		return;
	}
	Xuat(a, n - 1);
	cout << a[n - 1] << setw(10);
}


float Tong(float a[], int n)
{
	if (n == 0)
	{
		return 0;
	}
	float s = Tong(a, n - 1);
	return s + a[n - 1];
}
