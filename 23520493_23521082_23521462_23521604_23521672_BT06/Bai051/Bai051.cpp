#include <iostream>
using namespace std;

int Tinh(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Ket qua: " << Tinh(n);
	return 0;
}

int Tinh(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	int x = Tinh(n - 1);
	int y = Tinh(n - 2);
	return (1 + n) * x - n * y;
}