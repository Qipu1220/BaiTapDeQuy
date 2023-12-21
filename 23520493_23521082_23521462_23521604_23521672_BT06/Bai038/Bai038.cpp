#include <iostream>
using namespace std;

float ChuSoNhoNhat(int n);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	cout << "Chu so nho nhat = " << ChuSoNhoNhat(n);
	return 0;
}

float ChuSoNhoNhat(int n)
{
	if (n < 10)
		return n;
	int lc = n % 10;
	if (ChuSoNhoNhat(n / 10) < lc)
		lc = ChuSoNhoNhat(n / 10);
	return lc;
}