#include <iostream>
using namespace std;

int TonTaiChan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << TonTaiChan(n);

	return 0;
}

int TonTaiChan(int n)
{
	n = abs(n);
	if (n <= 9)
	{
		if (n % 2 == 0)
			return 1;
		return 0;
	}
	int dv = n % 10;
	if (dv % 2 == 0)
	{
		return 1;
	}
	return TonTaiChan(n / 10);
}