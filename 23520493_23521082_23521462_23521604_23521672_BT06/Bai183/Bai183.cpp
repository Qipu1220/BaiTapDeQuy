#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int);
void Xuat(int[], int);
int Dem(int[], int);

int main()
{
	int  n;
	cout << "Nhap n: ";
	cin >> n;
	int a[100];
	Nhap(a, n);
	cout << "Mang truoc do: ";
	Xuat(a, n);
	cout<<Dem(a, n);
	return 0;
}

void Nhap(int a[], int n)
{
	if (n == 0)
		return;
	srand(time(NULL));
	Nhap(a, n - 1);
	a[n - 1] = rand() % 201 - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << setprecision(4) << a[i];
	cout << endl;
}
int Dem(int a[], int n)
{
	if (n == 1)
		return 0;
	int dem = Dem(a, n - 1);
	if (a[n - 1] % 2 == 0 && a[n - 2] % 2 == 0)
		dem++;
	return dem;
}

