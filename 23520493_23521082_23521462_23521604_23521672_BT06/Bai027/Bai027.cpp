#include <iostream>
#include <cmath>
using namespace std;

void Nhap(int&);
float Tong(int);

void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}

float Tong(int n)
{
	if (n == 1)
		return 0;
	return pow((Tong(n - 1) + n), (float)1 / n);
}

int main()
{
	int n;
	Nhap(n);
	cout << "S = " << Tong(n);
	return 0;
}