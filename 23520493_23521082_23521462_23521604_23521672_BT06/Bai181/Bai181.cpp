#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 500
using namespace std;

void Nhap(float[], int);
void Xuat(float[], int);
void XuatBo2(float, float);
void LietKe(float[], int);

int main()
{
	float a[MAX];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nCac bo 2: " << endl;
	LietKe(a, n);
	return 0;
}



void Nhap(float a[], int n)
{
	srand(time(NULL));
	if (n == 0)
		return;
	Nhap(a, n - 1);
	a[n - 1] = rand() % 201 - 100;
}

void Xuat(float a[], int n)
{
	if (n == 0)
	{
		return;
	}
	Xuat(a, n - 1);
	cout << setw(10) << a[n - 1];
}


void XuatBo2(float x, float y)
{
	cout << setw(10) << setprecision(3);
	cout << "(" << x << "," << y << ")" << endl;
}

void LietKe(float a[], int n)
{
	if (n == 1)
	{
		return;
	}
	for (int i = 0; i < n-1; i++)
	{
		if (a[i] <= a[n - 1])
			XuatBo2(a[i], a[n - 1]);
		if (a[i] >= a[n - 1])
			XuatBo2(a[n - 1], a[i]);
	}
	LietKe(a, n - 1);
}