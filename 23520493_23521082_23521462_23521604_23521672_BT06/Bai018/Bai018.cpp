#include <iostream>
using namespace std;

float TongS(int n);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	cout << "Tong = " << TongS(n);
	return 0;
}

float TongS(int n)
{
	if (n == 0)
		return 0;
	return 1/( sqrt(n) + sqrt(n + 1)) + TongS(n - 1);
}