#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool KTHoanThien(int);
int KTTinhChat(int[], int);

int main()
{
	int a[100], n;
	Nhap(a, n);
	cout << "Mang ban dau la: " << endl;
	Xuat(a, n);
	cout << endl<<KTTinhChat(a, n);
	
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (200 + 1)-100;
	}
}
void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(4) << a[n - 1];
}
bool KTHoanThien(int n) {
	int tong = 1;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			if (i * i != n)
				tong = tong + i + n / i;
			else
				tong = tong + i;
		}
	}
	if (tong == n && n != 1)
		return true;
	return false;
}
int KTTinhChat(int a[], int n)
{
	if (n == 0)
		return 1;
	if (KTHoanThien(a[n - 1]) && a[n - 1] > 256)
		return 0;
	return KTTinhChat(a, n - 1);
}