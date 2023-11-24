#include <iostream>
using namespace std;

float Tinh(float x,int n);

int main()
{
	int n;
	float x;
	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap n = ";
	cin >> n;
	cout << "Tong: " << Tinh(x, n);
	return 0;
}

float Tinh(float x,int n)
{
	if (n == 0)
		return 1;
	return pow(x, n) + Tinh(x, n - 1);
}