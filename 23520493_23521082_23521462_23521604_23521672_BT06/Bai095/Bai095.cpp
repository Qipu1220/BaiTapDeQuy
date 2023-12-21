#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int DemChan(int[], int);

int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	cout << "Mang ban dau: \n";
	Xuat(a, n);

	cout << "\nSo luong gia tri chan: " << DemChan(a, n);

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 401 - 100;
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(10) << fixed << setprecision(2) << a[n - 1];
}

int DemChan(int a[], int n)
{
	if (n == 0)
		return 0;
	int dem = DemChan(a, n - 1);
	if (a[n - 1] % 2 == 0)
		dem++;
	return dem;
}