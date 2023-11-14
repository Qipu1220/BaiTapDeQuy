#include <iostream>
using namespace std;

void Nhap(int&);
float Tich(int);

void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}

float Tich(int n)
{
	if (n == 0)
		return 1;
	return Tich(n - 1) * (1 + (float)1 / (n * n));
}

int main()
{
	int n;
	Nhap(n);
	cout << "T = " << Tich(n);
	return 0;
}