#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void LietKeSoAm(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << endl << "Cac so am: " << endl;
	LietKeSoAm(a, n);

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = (((float)rand() / RAND_MAX) * 200) - 100;
	}

}

void Xuat(float a[], int n)
{
	if (n == 0)
	{
		return;
	}
	Xuat(a, n - 1);
	cout << setw(10) << a[n - 1];
}

void LietKeSoAm(float a[], int n)
{
	if (n == 0)
	{
		return;
	}
	LietKeSoAm(a, n - 1);
	if (a[n - 1] < 0)
	{
		cout << setw(10) << a[n - 1];
	}
}