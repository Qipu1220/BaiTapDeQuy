#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 200
using namespace std;


void Nhap(int[][MAX], int, int);
void Xuat(int[][MAX], int, int);
bool ktNguyenTo(int);
int DemNguyenTo(int[][MAX], int, int, int);




int main()
{
	int a[MAX][MAX], m, n;
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	int vtc;
	cout << "Nhap vi tri cot can kiem tra: ";
	cin >> vtc;
	cout << "So luong so nguyen to co trong cot vua nhap la: " << DemNguyenTo(a, m, n, vtc);
	return 0;
}


void Nhap(int a[][MAX], int m, int n)
{
	srand(time(NULL));
	if (m == 0)
		return;
	Nhap(a, m - 1, n);
	for (int i = 0; i < n; i++)
		a[m - 1][i] = rand() % 201 - 100;
}


void Xuat(int a[][MAX], int m, int n)
{
	if (m == 0)
		return;
	Xuat(a, m - 1, n);
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[m - 1][i];
	cout << endl;
}

bool ktNguyenTo(int n)
{
	if (n <= 0)
		return false;
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			dem++;
	}
	if (dem == 2)
		return true;
	return false;
}

int DemNguyenTo(int a[][MAX], int m, int n, int vtc)
{
	if (m == 0)
		return 0;
	int dem = DemNguyenTo(a, m - 1, n, vtc);
	if (ktNguyenTo(a[m - 1][vtc]))
		dem++;
	return dem;
}