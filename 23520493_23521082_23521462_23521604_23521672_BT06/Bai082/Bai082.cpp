#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int [], int&);
void LietKe(float[], int);
float LonNhat(float[], int);

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

float LonNhat(float a[], int n)
{
	float ln = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > ln)
			ln = a[i];
	return ln;
}
void LietKe(float a[], int n)
{
	if (n == 0)
		return;
	float lc = LonNhat(a, n - 1);
	if (lc < a[n - 1])
	{
		cout << setw(6) << n - 1;
		return;
	}
	if (lc == a[n - 1])
		cout << setw(6) << n - 1;
	LietKe(a, n - 1);

}

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	LietKe(a, n);
	return 0;
}