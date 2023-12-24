#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int [], int&);
void LietKe(int [], int);

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (a[n - 1] > 0)
		cout << setw(10) << setprecision(3) << a[n - 1];
}

int main()
{
	int a[100], n;
	Nhap(a, n);
	LietKe(a, n);
	return 0;
}