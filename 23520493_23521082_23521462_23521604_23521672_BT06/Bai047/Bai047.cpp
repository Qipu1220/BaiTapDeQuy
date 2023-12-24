#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int&);
int TinhAn(int);
int TinhBn(int);

void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}

int TinhAn(int n)
{
	if (n == 1)
		return 2;
	int x = TinhAn(n - 1);
	int y = TinhBn(n - 1);
	return x * x + 2 * y * y;
}

int TinhBn(int n)
{
	if (n == 1)
		return 1;
	int x = TinhAn(n - 1);
	int y = TinhBn(n - 1);
	return 2 * x * y;
}

int main()
{
	int n;
	Nhap(n);
	cout << "a" << n << "=" << TinhAn(n) <<setw(10)<< "b" << n << "=" << TinhBn(n);
	return 0;
}