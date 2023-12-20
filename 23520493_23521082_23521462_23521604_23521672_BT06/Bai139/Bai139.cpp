#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int BCNN(int[], int);

int main()
{
	int a[100], n;
	Nhap(a, n);
	cout << "Mang ban dau la: " << endl;
	Xuat(a, n);
	cout << "\nBCNN la: " << endl;
	cout << BCNN(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (200 + 1);
	}
}
void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(4) << a[n - 1];
}
int UCLN(int a, int b) {
	return (b == 0) ? a : UCLN(b, a % b);
}
int TimBCNN(int a, int b)
{
	return (a * b) / UCLN(a, b);
}
int BCNN(int a[], int n)
{
	if (n == 1)
		return a[0];
	int lc = BCNN(a, n - 1);
	lc = TimBCNN(lc, a[n - 1]);
	return lc;
}