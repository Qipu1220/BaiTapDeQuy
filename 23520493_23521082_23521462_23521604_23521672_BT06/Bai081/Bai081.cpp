#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;


void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int, int, int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	int x, y;
	cout << "\nNhap khoang: " << endl;
	cin >> x >> y;
	cout <<  "Cac phan tu chan trong khoang x y la : " << endl;
	LietKe(a, n, x, y);
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
	cout << a[n - 1] << setw(4);
}

void LietKe(int a[], int n, int x, int y)
{
	if (n == 0)
	{
		return;
	}
	LietKe(a, n - 1, x, y);
	if (a[n-1] >= x && a[n-1] <= y && a[n-1] % 2 == 0)
	{
		cout <<setw(4)<< a[n-1];
	}
}

