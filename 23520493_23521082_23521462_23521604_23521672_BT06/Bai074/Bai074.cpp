#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int);

int main()
{
	int a[100], n;
	Nhap(a, n);
	cout << "Mang ban dau la: " << endl;
	Xuat(a, n);
	cout << "\nMang co chu so dau la so chan la: " << endl;
	LietKe(a, n);
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
int chuso(int n) 
{
	int temp;
	do 
	{
		temp = n % 10;
		n = n / 10;
	} while (abs(n) > 0);
	return temp;
}
void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(4) << a[n - 1];
}
void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (chuso(a[n - 1]) % 2 == 0)
		cout << setw(4) << a[n - 1];
}