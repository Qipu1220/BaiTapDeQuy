//error


#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
bool ktTang(float[], int,int,int);
int DemConTang(float[], int, int, int);
int DemConTang(float[], int);

int main()
{
	int n;
	float a[100];
	Nhap(a, n);
	cout << "Mang ban dau: \n";
	Xuat(a, n);
	cout << "\nSo luong mang con tang do l lon hon 1 la: " << DemConTang(a, n);

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(10) << a[n - 1];
}

int DemConTang(float a[], int n, int vt, int l)
{
	if (vt == -1)
		return 0;
	int dem=DemConTang(a, n, vt-1, l);
	if (ktTang(a, n, vt, l))
		dem++;
	return dem;
}

int DemConTang(float a[], int n)
{
	if (n == 0)
		return 0;
	int dem=DemConTang(a, n - 1);
	for (int l = 2; l <= n; l++)
	{
		dem=dem+DemConTang(a, n, n - l, l);
	}
	return dem;
}

bool ktTang(float a[], int n,int vt,int l)
{
	for (int i = vt; i < vt + l - 1; i++)
		for (int j = i + 1; j <= vt + l - 1; j++)
			if (a[i] > a[j])
				return false;
	return true;
}