#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int);
void Xuat(int[], int);
void SapTang(int a[], int);
void HoanVi(int&, int&);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int a[100];
	Nhap(a, n);
	Xuat(a, n);
	cout << "Mang sau khi sap tang: " << endl;
	SapTang(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(int a[], int n)
{
	if (n == 0)
		return;
	srand(time(NULL));
	Nhap(a, n - 1);
	a[n - 1] = rand() / (RAND_MAX / 200.0) - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << setprecision(4) << a[i];
	cout << endl;
}

void SapTang(int a[], int n)
{
	if (n == 0)
		return;	
	for (int i = 0; i < n - 1; i++)
		if (a[n - 1] < a[i]&&a[n-1]>0)
			HoanVi(a[n - 1], a[i]);
	SapTang(a, n - 1);
}

void HoanVi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}