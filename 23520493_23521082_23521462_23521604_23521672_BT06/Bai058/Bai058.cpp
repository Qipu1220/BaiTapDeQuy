#include <iostream>
using namespace std;

int Giaithua(int n);
float Tinh(float x, int n);

int main()
{
	int n;
	float x;
	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap n = ";
	cin >> n;
	cout << "Tong la: " << Tinh(x, n);
	return 0;
}

int Giaithua(int n)
{
	if (n == 1)
		return 1;
	return n * Giaithua(n - 1);
}

float Tinh(float x, int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return 1 + (x * x) / 2;
	float tq = pow(x, 2 * n) / Giaithua(2 * n);
	return tq + Tinh(x, n - 1);
}