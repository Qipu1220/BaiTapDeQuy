#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int KiemTraMangDuong(int[], int);
void XuatMangCon(int[], int);
void LietKe(int[], int);

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(10) << a[n - 1];
}
int KiemTraMangDuong(int b[], int nn)
{
	for (int i = 0; i < nn; i++)
		if (b[i] < 0)
			return 0;
	return 1;
}
void XuatMangCon(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i];
	cout << endl;
}
void LietKe(int a[], int n)
{
	int ChieuDai;
	int b[100];
	int nn;
	for (int i = 0; i < n; i++)
	{
		nn = 0;
		for (ChieuDai = 2 + i; ChieuDai <= nn; ChieuDai++)
		{
			for (int j = 0; j < ChieuDai; j++)
			{
				b[nn] = a[j];
				nn++;
			}
			if (KiemTraMangDuong(b, nn) == 1)
			{
				XuatMangCon(b, nn);
			}
		}
	}
}
int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	cout << "Mang ban dau: \n";
	Xuat(a, n);

	cout << "\nCac mang con la: \n";
	LietKe(a, n);

	return 0;
}