#include <iostream>
using namespace std;

int TinhAn(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "So hang thu n cua day: " << TinhAn(n);
	return 0;
}

int TinhAn(int n)
{
	if (n == 1)
	{
		return -2;
	}
	int an = 5 * TinhAn(n - 1) + 12;
	return an;
}