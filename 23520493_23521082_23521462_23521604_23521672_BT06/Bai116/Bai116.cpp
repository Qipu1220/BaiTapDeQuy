#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 500
using namespace std;

void Nhap(float[], int);
void Xuat(float[], int);
float DuongCuoi(float[], int);

int main()
{
	float a[MAX];
	int n;
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nGia tri duong cuoi: " << DuongCuoi(a, n);
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
	a[n - 1] = (((float)rand() / RAND_MAX) * 200) - 100;
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

float DuongCuoi(float a[], int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (a[n - 1] > 0)
		return a[n - 1];
	return DuongCuoi(a,n-1);
}