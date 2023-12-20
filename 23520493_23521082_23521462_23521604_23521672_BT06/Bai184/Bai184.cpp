#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int DemPhanBiet(int[], int);

int main()
{
	int a[100], n;
	Nhap(a, n);
	cout << "Mang ban dau la: " << endl;
	Xuat(a, n);
	cout <<"\nSo phan tu phan biet la: " << DemPhanBiet(a, n)<<endl;
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(4) << a[n - 1];
}
int DemPhanBiet(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	int dem = DemPhanBiet(a,n-1);
	int flag = 1;
	DemPhanBiet(a, n - 1);
	for (int i = 0; i <= n-2; i++)
		if (a[i] == a[n - 1])
			flag = 0;
	if (flag == 1)
		dem++;
	return dem;
}