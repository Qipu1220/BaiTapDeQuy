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
	if (n == 0)
		return 0;
	return pow(n+TinhS(n-1), (float)1 / (n + 1));
}