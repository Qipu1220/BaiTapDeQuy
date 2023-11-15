#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

long double Tinh(long double,int);

int main()
{
	long double x;
	int n;

	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;

	long double kq;
	kq = Tinh(x,n);
	cout << "ket qua: " << kq;

	return 0;
}

long double Tinh(long double x,int n)
{
	if (n == 0)
		return x;
	if (n == 1)
		return (x + x * x * x);
	long double a = Tinh(x,n - 1);
	long double b = Tinh(x,n - 2);
	return ((1 + x * x) * a - x * x * b);
}