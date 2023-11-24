#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int);
void Xuat(int[], int);
void ThemViTri(int a[], int,int ,int);
void HoanVi(int&, int&);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int a[100],x,vt;
	cin >> x >> vt;
	Nhap(a, n);
	Xuat(a, n);
	cout << "Mang sau khi them x: " << endl;
	n++;
	ThemViTri(a, n,x,vt);
	Xuat(a, n);
	return 0;
}

void Nhap(int a[], int n)
{
	if (n == 0)
		return;
	srand(time(NULL));
	Nhap(a, n - 1);
	a[n - 1] = rand() % 201 -100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << setprecision(4) << a[i];
	cout << endl;
}

void ThemViTri(int a[], int n, int x,int vt)
{
	if (n == vt)
	{
		a[vt] = x;
		return;
	}
	a[n] = a[n - 1];
	ThemViTri(a, n - 1,x,vt);
}

