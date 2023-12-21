#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int);
void Xuat(int[], int);
void LietKe(int a[], int);
void HoanVi(int&, int&);
void XuatCon(int[], int, int, int);

int ktCon(int[], int,int,int);
int TongCon(int[], int, int, int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int a[100];
	Nhap(a, n);
	Xuat(a, n);
	cout << "Cac mang con tang: " << endl;
	LietKe(a, n);
	return 0;
}

void Nhap(int a[], int n)
{
	if (n == 0)
		return;
	srand(time(NULL));
	Nhap(a, n - 1);
	a[n - 1] = rand() % 201 - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << setprecision(4) << a[i];
	cout << endl;
}

void LietKe(int a[], int n)
{

	for (int l = 1; l <= n; l++)
		for (int vt = 0; vt <= n - l; vt++)
			if (ktCon(a, n, vt, l)) 
			{
				cout << "Mang con: ";
				XuatCon(a, n, vt, l);
				cout <<endl<<" co tong la :"<< TongCon(a, n, vt, l)<<endl;
			}
}
void XuatCon(int a[], int n, int vt, int l)
{
	for (int i = 0; i < l; i++)
		cout <<setw(4)<< a[vt + i] ;
}
int ktCon(int a[], int n,int vt,int l)
{
	for (int i = 0; i < l - 1; i++)
		if (a[vt+i] > a[vt+i + 1])
			return 0;
	return 1;
}
int TongCon(int a[], int n, int vt, int l)
{
	int s = 0;
	for (int i = 0; i <= l - 1; i++)
		s += a[vt + i];
	return s;
}