#include <iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int);
void LietKe(int[], int);
int ktNguyenTo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int a[100];
	Nhap(a, n);
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

void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (ktNguyenTo(a[n - 1]))
		cout << setw(10) << n - 1;
}

int ktNguyenTo(int n)
{
	int dem = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 1)
		return 1;
	return 0;
}