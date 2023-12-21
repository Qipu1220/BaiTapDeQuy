#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void Xuat3k(int[], int);
bool kt3k(int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << endl << "Cac so co dang 3^k: " << endl;
	Xuat3k(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 201 - 100;
	}

}

void Xuat(int a[], int n)
{
	if (n == 0)
	{
		return;
	}
	Xuat(a, n - 1);
	cout << setw(10) << a[n - 1];
}

bool kt3k(int n)
{
	if (n < 1)
		return false;
	bool flag = true;
	for (int t = n; t > 1; t = t / 3)
		if (t % 3 != 0)
			flag = false;
	return flag;

}

void Xuat3k(int a[], int n)
{
	if (n == 0)
		return;
	Xuat3k(a, n - 1);
	if (kt3k(a[n - 1]))
		cout << setw(6) << a[n - 1];

}