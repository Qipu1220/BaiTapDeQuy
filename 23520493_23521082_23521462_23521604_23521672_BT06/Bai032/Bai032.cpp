#include <iostream>
#include <cmath>
using namespace std;

void Nhap(int&);
float Tinhan(int);

void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}

float Tinhan(int n)
{
	if (n == 1)
		return 2;
	float at = Tinhan(n - 1);
	return (float)((-9 * at - 24) / (5 * at + 13));
}

int main()
{
	int n;
	Nhap(n);
	cout << "a"<<n<<" = " << Tinhan(n);
	return 0;
}