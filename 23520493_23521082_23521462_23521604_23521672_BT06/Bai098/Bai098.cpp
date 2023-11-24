#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int);
void Xuat(float[], int);
int TanSuat(float a[], int n,float);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float a[100];
	Nhap(a, n);
	Xuat(a, n);
	cout << "KQ la: " << TanSuat(a, n,x);
	return 0;
}

void Nhap(float a[], int n)
{
	if (n == 0)
		return;
	srand(time(NULL));
	Nhap(a, n - 1);
	a[n - 1] = rand()/(RAND_MAX/200.0 )- 100;
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << a[i];
	cout << endl;
}

int TanSuat(float a[], int n, float x)
{
	if (n == 0)
		return 0;
	int dem = TanSuat(a, n - 1, x);
	if (a[n - 1] == x)
		dem++;
	return dem;
}
