#include <iostream>
using namespace std;

int DemLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "So luong so le cua so n: " << DemLe(n);
	return 0;
}

int DemLe(int n)
{
	n = abs(n);
	if (n <= 9)
	{
		if (n % 2 != 0)
			return 1;
		return 0;
	}
	int dem = DemLe(n/10);
	int dv = n % 10;
	if (dv % 2 != 0)
		return dem = dem + 1;
	return dem;
}