#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktToanLe(int);
void LietKe(int[], int);

int main()
{
	int n;
	int a[100];

	Nhap(a, n);
	cout << "Mang ban dau: \n";
	Xuat(a, n);
	cout << "\nCac gia tri chan: \n";
	LietKe(a, n);

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 201 - 100;
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(6) << a[n - 1];
}

bool ktToanLe(int x)
{
	bool flag = true;
	int n = x;
	while (n != 0)
	{
		int dv = n % 10;
		if (dv % 2 == 0)
			flag = false;
		n = n / 10;
	}
	return flag;
}

void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (ktToanLe(a[n-1]))
		cout << setw(6) << a[n - 1];
}