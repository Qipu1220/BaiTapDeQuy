//error


#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
bool ktTang(float[], int);
void DemConTang(float[], int, int, int);
void DemConTang(float[], int);

int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	cout << "Mang ban dau: \n";
	Xuat(a, n);

	cout << "\nLiet ke mang con: \n";
	DemConTang(a, n);

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 201 - 100;
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(10) << a[n - 1];
}

void DemConTang(float a[], int n, int vt, int l)
{
	if (l == 0)
		return;
	DemConTang(a, n, vt, l - 1);
	cout << setw(10) << a[vt + l - 1];
}

void DemConTang(float a[], int n)
{
	if (n == 0)
		return;
	DemConTang(a, n - 1);
	for (int l = 1; l <= n; l++)
	{
		DemConTang(a, n, n - l, l);
		cout << endl;
	}
}

bool ktTang(float a[], int n,int vt,int l)
{
	if (n == 1)
		return true;
	for (int i = vt; i < vt+l-1; i++)
		if (a[i] > a[vt+l-1])
			return false;
	return ktTang(a, n - 1,vt,l);
}