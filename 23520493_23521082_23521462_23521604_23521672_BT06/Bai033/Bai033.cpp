#include <iostream>
using namespace std;

float TinhS(int n);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	cout << "S = " << TinhS(n);
	return 0;
}

float TinhS(int n)
{
	if (n == 1)
		return 2;
	float at = TinhS(n - 1);
	return (at*at+ 2) / (2 * at);
}