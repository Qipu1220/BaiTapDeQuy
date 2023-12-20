#include <iostream>
#include<iomanip>
using namespace std;

long double LuyThua(double, int);

int main()
{
	int x,n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Luy thua la: " << LuyThua(x, n);
	return 0;
}
long double LuyThua(double x, int n)
{
	if (n == 0)
		return 1;
	float t = LuyThua(x,n-1);
	return (t * x);
}