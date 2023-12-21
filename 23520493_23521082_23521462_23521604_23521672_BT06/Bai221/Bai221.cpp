#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#define MAX 200
using namespace std;


void Nhap(int[][MAX], int, int);
void Xuat(int[][MAX], int, int);
bool ktChinhPhuong(int);
int TongCot(int[][MAX], int, int, int);

int main()
{
	int a[MAX][MAX];
	int n, m, vtc;
	cout << "Nhap so hang: ";
	cin >> n;
	cout << "Nhap so cot: ";
	cin >> m;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "\nNhap cot can tinh tong: ";
	cin >> vtc;
	cout << "Tong cac so chinh phuong tren cot vua nhap la: " << TongCot(a, m, n, vtc);
	return 0;
}


void Nhap(int a[][MAX], int m, int n)
{
	srand(time(NULL));
	if (m == 0)
		return;
	Nhap(a, m - 1, n);
	for (int i = 0; i < n; i++)
	{
		a[m - 1][i] = rand() % 201 - 100;
	}
}

void Xuat(int a[][MAX], int m, int n)
{
	if (m == 0)
		return;
	Xuat(a, m - 1, n);
	for (int i = 0; i < n; i++)
	{
		cout << setw(6) << a[m - 1][i];
	}
	cout << endl;
}

bool ktChinhPhuong(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (i * i == n)
		{
			return true;
		}
	}
	return false;
}


int TongCot(int a[][MAX], int m, int n, int vtc)
{
	if (m == 0)
		return 0;
	int s = TongCot(a, m-1, n, vtc);
	if (ktChinhPhuong(a[m - 1][vtc]))
		s += a[m - 1][vtc];
	return s;
}