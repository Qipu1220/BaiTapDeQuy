#include <iostream>
#include <iomanip>
using namespace std;

float Tinh(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Ket qua: " <<fixed<<setprecision(5) << Tinh(n);
	return 0;
}

float Tinh(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	float x = Tinh(n - 1);
	float y = Tinh(n - 2);
	return (x + (float)1 / ((1 / (x - y)) + n));
}