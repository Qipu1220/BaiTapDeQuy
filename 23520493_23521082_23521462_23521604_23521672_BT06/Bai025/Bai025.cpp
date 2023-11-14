#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int TichSoLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = TichSoLe(n);
	cout << "Ket qua: " << kq;
	return 0;
}

int TichSoLe(int n)
{
	n = abs(n);
	if (n == 0)
		return 0;
	if (n <= 9)
	{
		if (n % 2 != 0)
			return n;
		return 1;
	}
	int T = TichSoLe(n/10);
	int dv = n % 10;
	if (dv % 2 != 0)
		return T * dv;
	return T;
}