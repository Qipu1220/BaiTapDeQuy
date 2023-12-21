#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int UocLeLonNhat(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = UocLeLonNhat(n);
	if (kq == 0)
		cout << "Khong xac dinh";
	else
		cout << "Ket qua: " << kq;
	return 0;
}

int UocLeLonNhat(int n)
{
	n = abs(n);
	if (n % 2 != 0)
		return n;
	return UocLeLonNhat(n / 2);
}