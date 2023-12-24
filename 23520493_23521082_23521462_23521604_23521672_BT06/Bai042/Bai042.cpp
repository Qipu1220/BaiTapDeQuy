#include <iostream>
using namespace std;

void Nhap(int&);
int ToanChan(int);

void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}

int ToanChan(int n)
{
	if (n <= 9)
	{
		if (n % 2 == 0)
			return 1;
		return 0;
	}
	int dv = n % 10;
	if (dv % 2 == 0 && ToanChan(n / 10) == 1)
		return 1;
	else
		return 0;
}

int main()
{
	int n;
	Nhap(n);
	if (ToanChan(n) == 1)
		cout << "Toan chan";
	else
		cout << "Khong toan chan";
	return 0;
}