#include <iostream>
using namespace std;

float Tich(int n);

int main()	
{
	int n;
	cout << "Nhap n = ";	
	cin >> n;
	cout << "Tich = " << Tich(n);
	return 0;
}

float Tich(int n)
{
	if (n < 10)
		return abs(n);
	return abs(n % 10 ) * Tich(n / 10);
}