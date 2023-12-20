#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int);

int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	cout << "Mang ban dau: \n";
	Xuat(a, n);

	cout << "\nCac phan tu la: \n";
	LietKe(a, n);

	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(10) << a[n - 1];
}
void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	if (n == 1)
		return;
	for (int i = 0; i < n; i++) {
		if (i > 0 && a[i] % 2 == 0 && a[i - 1] % 2 == 0)
			cout << a[i] << " ";
		else if (i < n - 1 && a[i] % 2 == 0 && a[i + 1] % 2 == 0)
			cout << a[i] << " ";
	}
}