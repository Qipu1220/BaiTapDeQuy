#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int&, int&);
void ViTriLeTang(int[], int);

int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	cout << "Mang ban dau: \n";
	Xuat(a, n);

	ViTriLeTang(a, n);
	cout << "\nMang vi tri le tang: \n";
	Xuat(a, n);

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 201 - 100;
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(10) << fixed << setprecision(2) << a[n - 1];
}

void HoanVi(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void ViTriLeTang(int a[], int n)
{
	if (n == 0)
	{
		return;
	}
	for (int i = 0; i < n; i++)
		if (i % 2 != 0 && (n - 1) % 2 != 0 && a[i] > a[n - 1])
			HoanVi(a[i], a[n - 1]);
	ViTriLeTang(a, n - 1);
}