#include <iostream>
#include<iomanip>
using namespace std;

void Xuat(float[], int);

int main()
{
	int n=10;
	float a[10] = { 0,1,2,3,4,5 };
	Xuat(a,n);
	return 0;
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(10) << setprecision(3) << a[n - 1];
}