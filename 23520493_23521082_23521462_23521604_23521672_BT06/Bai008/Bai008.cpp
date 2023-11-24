#include <iostream>
using namespace std;

float TichT(int n);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	cout << "Tich = " << TichT(n);
	return 0;
}

float TichT(int n)
{
	if (n == 1)
		return 1;
	return n*TichT(n-1);
}