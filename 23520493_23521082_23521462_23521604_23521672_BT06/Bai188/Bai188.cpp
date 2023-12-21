#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int);
void Xuat(int[], int);
int ktThuoc(int[], int, int[], int);
int ktThuoc(int a[], int m, int b[], int n, int co);

int main()
{
	int m, n;
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	int a[100], b[100];
	Nhap(a, m);
	Nhap(b, n);
	cout << "Kiem Tra: " << ktThuoc(a, m, b, n);
	return 0;
}

void Nhap(int a[], int n)
{
	if (n == 0)
		return;
	// 
	Nhap(a, n - 1);
	cin >> a[n - 1];
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << setprecision(4) << a[i];
	cout << endl;
}

int ktThuoc(int a[], int m, int b[], int n)
{
	int co = 0;
	if (m > n)
		return 0;
	if (m == 0)
		return 0;
	for (int i = 0; i < n; i++)
	{
		if (a[m - 1] == b[i])
		{
			co=1;
			break;
		}
	}
	if (ktThuoc(a,m-1,b,n)&&co==1)
		return 1;
	 return 0;
}
