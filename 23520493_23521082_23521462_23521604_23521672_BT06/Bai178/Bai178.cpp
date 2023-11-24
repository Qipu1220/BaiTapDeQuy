#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int);
void Xuat(int[], int);
void DichTrai(int[], int,int);

int main()
{
	int  n;
	cout << "Nhap n: ";
	cin >> n;
	int a[100];
	Nhap(a, n);
	cout << "Mang truoc do: ";
	Xuat(a, n);
	int i = 0;
	cout << "Mang sau do  : ";
	DichTrai(a, n, i);
	Xuat(a, n);
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
int temp;
void DichTrai(int a[], int n,int i)
{
	
	if (i == 0)
	{
		temp = a[0];
	}
	if (i == n - 1)
	{
		a[i] = temp;
		return;
	}
		a[i] = a[i + 1];
	DichTrai(a, n, i + 1);
}

