#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int DemPhanBiet(float[], int);

int main()
{
	int n;
	float a[100];
	Nhap(a, n);
	cout << "Mang ban dau: \n";
	Xuat(a, n);

	cout << "\nSo luong cac gia tri phan biet: " << DemPhanBiet(a, n);

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = (float)rand() / RAND_MAX * 200 - 100;
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(10) << fixed << setprecision(2) << a[n - 1];
}

int DemPhanBiet(float a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	int dem = DemPhanBiet(a, n - 1);
	int flag = 1;
	for (int i = 0; i < n - 1; i++)
		if (a[i] == a[n - 1])
			flag = 0;
	if (flag == 1)
		dem++;
	return dem;
}