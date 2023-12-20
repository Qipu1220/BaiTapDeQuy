#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

float Tinh(float, int);

int main()
{
	float x;
	int n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Dap an la: " << Tinh(x, n);
	return 0;
}
float Tinh(float x, int n)
{
	if (n == 0)
		return 1 + x;
	if (n == 1)
		return 1 + x + (pow(x, 3) / (1 + 2 + 3));
	float a = Tinh(x, n - 1);
	float b = Tinh(x, n - 2);
	return ((1 + pow(x, 2) / ((2 * n) * (2 * n + 1))) * a - b * pow(x, 2) / ((2 * n) * (2 * n + 1)));
}