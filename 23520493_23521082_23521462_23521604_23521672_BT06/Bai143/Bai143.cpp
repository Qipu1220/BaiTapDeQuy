#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int);
void Xuat(int[], int);
int ktTonTaiNguyenTo(int a[], int);
int ktNguyenTo(int n);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int a[100];
	Nhap(a, n);
	Xuat(a, n);
	cout << "Mang co ton tai so nguyen to khong?: " << ktTonTaiNguyenTo(a, n);
	return 0;
}

void Nhap(int a[], int n)
{
	if (n == 0)
		return;
	srand(time(NULL));
	Nhap(a, n - 1);
	a[n - 1] = rand() / (RAND_MAX / 200.0);
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << setprecision(4) << a[i];
	cout << endl;
}

int ktTonTaiNguyenTo(int a[], int n)
{
	if (n == 0)
		return 0;
	int flag=ktTonTaiNguyenTo(a, n - 1);
	if (flag == 1)
		return 1;
	return ktNguyenTo(a[n - 1]);
}

int ktNguyenTo(int n)
{
	if (n < 2) 
		return 0;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return 0;
	return 1;
}
