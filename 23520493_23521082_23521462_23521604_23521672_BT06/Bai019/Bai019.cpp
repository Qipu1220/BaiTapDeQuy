#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tong la: " << Tong(n);
	return 0;
}
float Tong(int n)
{
	if (n == 0)
		return 0;
	float s = Tong(n - 1);
	return (s + 1. / ((n + 1) * sqrt(n) + n * sqrt(n + 1)));
}