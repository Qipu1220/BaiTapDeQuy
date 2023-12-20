#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int DemDoiXung(int[], int);

int main()
{
	int a[100], n;
	Nhap(a, n);
	cout << "Mang ban dau la: " << endl;
	Xuat(a, n);
	cout << "\nSo luong so doi xung la: " << endl;
	cout << DemDoiXung(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(4) << a[n - 1];
}

bool ktDoiXung(int n) {
	int temp = n;
	int DX = 0;
	while (temp != 0) {
		int dv = temp % 10;
		DX = DX * 10 + dv;
		temp /= 10;
	}
	return (n == DX);
}

int DemDoiXung(int a[], int n)
{
	if (n == 0)
		return 0;
	int dem = DemDoiXung(a, n - 1);
	if (ktDoiXung(a[n - 1]))
		dem++;
	return dem;
}