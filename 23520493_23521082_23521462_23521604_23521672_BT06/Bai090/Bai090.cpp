#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktDoiXung(int);
int TongDoiXung(int[], int);

int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	cout << "Mang ban dau: \n";
	Xuat(a, n);

	int kq = TongDoiXung(a, n);
	cout << "\nKet qua: " << kq;

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand()% 401 - 100;
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(10) << fixed << setprecision(2) << a[n - 1];
}

bool ktDoiXung(int x)
{
	int dn = 0;
	int t = abs(x);
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	return (dn == abs(x));
}

int TongDoiXung(int a[], int n)
{
	if (n == 0)
		return 0;
	int s = TongDoiXung(a, n - 1);
	if (ktDoiXung(a[n - 1]))
		s = s + a[n - 1];
	return s;
}