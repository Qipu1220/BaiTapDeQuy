#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int&,int&);
float Tinh(int ,int );

void Nhap(int& x,int& n)
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
}

float Tinh(int x,int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return x;
	float a = Tinh(x,n - 1);
	float b = Tinh(x,n - 2);
	return ((1 + n) * a - x * b);
}

int main()
{
	int x,n;
	Nhap(x,n);
	cout << " S = " << Tinh(x, n);
	return 0;
}