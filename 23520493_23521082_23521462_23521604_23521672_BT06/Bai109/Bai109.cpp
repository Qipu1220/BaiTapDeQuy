#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TimX(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau la: " << endl;
	Xuat(a, n);
	cout << "\nKhoang do la: [-" <<TimX(a,n) <<"; "<<TimX(a,n)<<"]" << endl;
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
float TimX(float a[], int n)
{
	if (n == 1)
		return abs(a[0]);
	float ln = TimX(a, n - 1);
	if (abs(a[n - 1]) > ln)
		ln = abs(a[n - 1]);
	return ln;
}