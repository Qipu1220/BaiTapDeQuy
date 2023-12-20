#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

float Tinh(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Dap an la: " << Tinh(n);
	return 0;
}
float Tinh(int n)
{
	if (n == 0)
		return 1;
	float s = Tinh(n - 1);
	return (1. / (1 + s));
}