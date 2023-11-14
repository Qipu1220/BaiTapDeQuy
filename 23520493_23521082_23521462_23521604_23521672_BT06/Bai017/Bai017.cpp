#include <iostream>
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
	if (n == 0)
		return 0;
	return Tong(n - 1) + (float)1 / (n*(n+1)*(n+2)*(n+3));
}

int main()
{
	int n;
	Nhap(n);
	cout << "S = " << Tong(n);
	return 0;
}