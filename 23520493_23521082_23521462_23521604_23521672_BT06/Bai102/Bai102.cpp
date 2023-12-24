#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float [], int&);
float LonNhat(float[], int);
int DemLonNhat(float[], int);


void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

int DemLonNhat(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = LonNhat(a, n - 1);
	if (lc < a[n - 1])
		return 1;
	int dem = DemLonNhat(a, n - 1);
	if (lc == a[n - 1])
		dem++;
	return dem;
}

float LonNhat(float a[], int n)
{
	float max = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "So lan xuat hien cua so lon nhat : " << DemLonNhat(a, n);
}
