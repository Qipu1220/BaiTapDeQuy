#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 500
using namespace std;

void Nhap(float[], int);
void Xuat(float[], int);
float XaNhat(float[], int, float);

int main()
{
	float a[MAX];
	int n;
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	float x;
	cout << "\nNhap x: ";
	cin >> x;
	cout << "Gia tri xa x nhat: " << XaNhat(a, n, x);
	return 0;
}

void Nhap(float a[], int n)
{
	srand(time(NULL));
	if (n == 0)
	{
		return;
	}
	Nhap(a, n - 1);
	a[n-1] = (((float)rand() / RAND_MAX) * 200) - 100;
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

float XaNhat(float a[], int n, float x)
{
	if (n == 1)
	{
		return a[0];
	}
	float lc = XaNhat(a, n - 1, x);
	if (abs(a[n - 1] - x) > abs(lc - x))
		lc = a[n - 1];
	return lc;
}