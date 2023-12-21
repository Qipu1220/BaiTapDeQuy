#include <iostream>
#include <iomanip>
using namespace std;

float Tich(int,float);

int main()
{
	float x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Tong: " <<fixed<<setprecision(4)<< Tich(n, x);
	return 0;
}

float Tich(int n, float x)
{
	if (n == 0)
	{
		return x;
	}
	float s = Tich(n - 1, x);
	return (s * (float)(x+n));
}