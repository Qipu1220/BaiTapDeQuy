#include <iostream>
#include <cmath>
using namespace std;

void Nhap(int&);
int DemChan(int);

void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}

int DemChan(int n)
{
	if (n == 0)
		return 0;
	int dv = n % 10;
	if (dv % 2 == 0)
		return DemChan(n / 10) + 1;
	else
		return DemChan(n / 10);
}

int main()
{
	int n;
	Nhap(n);
	cout << "So luong chu so chan la : " << DemChan(n);
	return 0;
}