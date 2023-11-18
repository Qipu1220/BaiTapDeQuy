#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktToanLe(int);
int TimGiaTri(int[], int);

int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	cout << "Mang ban dau: \n";
	Xuat(a, n);

	cout << "\nGia tri toan le lon nhat: " << TimGiaTri(a, n);

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
	cout << setw(10) << fixed << setprecision(2) << a[n - 1];
}

bool ktToanLe(int x)
{
	bool flag = true;
	for (int t = x; t != 0; t=t / 10)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = false;
	}
	return flag;
}

int TimGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int lc = TimGiaTri(a, n - 1);
	if (ktToanLe(a[n - 1]) == false)
		return lc;
	if (lc == 0)
		return a[n - 1];
	if (a[n - 1] > lc)
		return a[n - 1];
}