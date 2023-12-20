#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int NguyenToDau(int[], int);

int main()
{
	int a[100], n;
	Nhap(a, n);
	cout << "Mang ban dau la: " << endl;
	Xuat(a, n);
	cout << "\nSo nguyen to dau tien la: " << endl;
	cout << NguyenToDau(a, n);
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
bool ktNguyenTo(int n)
{
	int dem = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 1)
		return true;
	return false;
}
int NguyenToDau(int a[], int n)
{
	if (n == 0)
		return -1;
	int lc = NguyenToDau(a, n - 1);
	if (lc != -1)
		return lc;
	if (ktNguyenTo(a[n - 1]))
		return a[n - 1];
	return -1;

}