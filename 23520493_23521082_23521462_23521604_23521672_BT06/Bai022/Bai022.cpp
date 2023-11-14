#include <iostream>
using namespace std;

void Nhap(int&);
float TongChuSo(int);

void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}

float TongChuSo(int n)
{
	if (n == 0)
		return 0;
	return TongChuSo(n / 10) + n % 10;
}

int main()
{
	int n;
	Nhap(n);
	cout << "Tong cac chu so la: " << TongChuSo(n);
	return 0;
}