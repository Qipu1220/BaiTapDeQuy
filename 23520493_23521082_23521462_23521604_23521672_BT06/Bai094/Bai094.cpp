#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TongGiaTriThuc(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau la: " << endl;
	Xuat(a, n);
	cout << "\nTong sau la: " << endl;
	cout <<setw(4)<<setprecision(3)<< TongGiaTriThuc(a, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
	}
}
void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(4) << setprecision(3) << a[n - 1] << " ";
}
float TongGiaTriThuc(float a[], int n)
{
	if (n <= 1)
		return 0;
	float s = TongGiaTriThuc(a, n - 1);
	if (a[n - 2] > a[n - 1])
		s = s + a[n - 2];
	return s;
}