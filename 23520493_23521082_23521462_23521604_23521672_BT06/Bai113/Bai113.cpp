#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int);
void Xuat(int[], int);
int ChanDau(int a[], int);


int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int a[100];
	Nhap(a, n);
	Xuat(a, n);
	cout << "So chan dau tien trong mang nguyen la: " << ChanDau(a, n);
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

int ChanDau(int a[], int n)
{
	if (n == 0)
		return -1;
	int CD = ChanDau(a,n-1);
	if (CD != -1)
		return CD;
	if (a[n - 1] % 2 == 0)
		return a[n - 1];
	return -1;
}
