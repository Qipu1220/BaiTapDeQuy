#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int);
void Xuat(float[], int);
float LonNhat(float a[], int);
float BeNhat(float a[], int);


int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float a[100];
	Nhap(a, n);
	Xuat(a, n);
	cout << "Doan [x,y] la: " <<BeNhat(a,n)<<","<< LonNhat(a, n);
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
		cout << setw(8) << setprecision(4) << a[i];
	cout << endl;
}

float LonNhat(float a[], int n)
{
	if (n == 0)
		return a[0];
	float lc = a[n - 1];
	if (LonNhat(a, n - 1) > lc)
		lc = LonNhat(a, n - 1);
	return lc;
}

float BeNhat(float a[], int n)
{
	if (n == 0)
		return a[0];
	float lc = a[n - 1];
	if (BeNhat(a, n - 1) < lc)
		lc = BeNhat(a, n - 1);
	return lc;
}