#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int);
void Xuat(int[], int);
int TimGiaTri(int a[], int);
int kt2m(int n);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int a[100];
	Nhap(a, n);
	Xuat(a, n);
	cout << "So dang 2^m dau tien trong mang nguyen la: " << TimGiaTri(a, n);
	return 0;
}

void Nhap(int a[], int n)
{
	srand(time(NULL));
	if (n == 0)
		return;
	Nhap(a, n - 1);
	a[n - 1] = rand() / (RAND_MAX / 200.0) - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << setprecision(4) << a[i];
	cout << endl;
}

int TimGiaTri(int a[], int n)
{
	if (n == 0)
		return -1;
	int CD = TimGiaTri(a, n - 1);
	if (CD != -1)
		return CD;
	if (kt2m(a[n - 1]))
		return a[n - 1];
	return 0;
}

/*int kt2m(int n)
{
	if (n < 1)
		return 0;
	for (int i = 1; i <= n/2; i++)
		if (pow(2,i) == n)
			return 1;
	return 0;
}*/
int kt2m(int n)
{
	if (n < 1)
		return 0;
	if (n == 1)
		return 1;
	int du = n % 2;
	if (du != 0)
		return 0;
	return kt2m(n / 2);
}