#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int);
void LietKe(float[], int);
int ktNguyenTo(int);
float NhoNhat(float[], int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float a[100];
	Nhap(a, n);
	for (int i = 0; i < n; i++)
		cout <<setw(10)<<setprecision(4)<< a[i];
	cout << endl;
	LietKe(a, n);
	return 0;
}

void Nhap(float a[], int n)
{
	if (n == 0)
		return;
	srand(time(NULL));
	Nhap(a, n - 1);
	a[n - 1] = rand()/(RAND_MAX/200.0) - 100;
}

void LietKe(float a[], int n)
{
	if (n == 0)
		return;
	float lc = NhoNhat(a, n - 1);
	if (lc > a[n - 1])
	{
		cout << setw(6) << n - 1;
		return;
	}
	if (lc == a[n - 1])
		cout << setw(6) << n - 1;
	LietKe(a, n - 1);
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

float NhoNhat(float a[], int n)
{
	if (n == 1)
		return a[0];
	float lc = NhoNhat(a, n - 1);
	if (a[n - 1] < lc)
		lc = a[n - 1];
	return lc;
}