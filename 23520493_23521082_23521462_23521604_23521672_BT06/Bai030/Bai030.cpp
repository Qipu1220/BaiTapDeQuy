#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int TinhAn(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = TinhAn(n);
	cout << "Ket qua: " << kq;
	return 0;
}

int TinhAn(int n)
{
	if (n == 1)
		return 2;
	int s = TinhAn(n - 1);
	return (s + 2 * n + 1);
}