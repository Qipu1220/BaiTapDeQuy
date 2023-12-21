#include <iostream>
using namespace std;

int Tinh(int n);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	cout << "Tong: " << Tinh(n);
	return 0;
}

int Tinh(int n)
{
	if (n == 0)
		return -1;
	if (n == 1)
		return 3;
	int an = Tinh(n - 1);
	int at = Tinh(n - 2);
	return 5 * an + 6 * at;
}