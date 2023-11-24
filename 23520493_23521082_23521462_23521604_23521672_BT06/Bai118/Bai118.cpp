#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int);
void Xuat(int[], int);
int ChinhPhuongDau(int a[], int);
int ktChinhPhuong(int n);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int a[100];
	Nhap(a, n);
	Xuat(a, n);
	cout << "So chinh phuong dau tien trong mang nguyen la: " << ChinhPhuongDau(a, n);
	return 0;
}

void Nhap(int a[], int n)
{
	if (n == 0)
		return;
	srand(time(NULL));
	Nhap(a, n - 1);
	a[n - 1] = rand() / (RAND_MAX / 200.0) - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << setprecision(4) << a[i];
	cout << endl;
}

int ChinhPhuongDau(int a[], int n)
{
	if (n == 0)
		return -1;
	int CD = ChinhPhuongDau(a, n - 1);
	if (CD != -1)
		return CD;
	if (ktChinhPhuong(a[n-1]))
		return a[n - 1];
	return -1;
}

int ktChinhPhuong(int n)
{
	for (int i = 1; i <= n; i++)
		if (i * i == n)
			return 1;
	return 0;
}