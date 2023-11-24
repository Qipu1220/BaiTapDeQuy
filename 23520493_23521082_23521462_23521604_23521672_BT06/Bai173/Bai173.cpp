#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int);
void Xuat(int[], int);
int DemCon(int[], int, int[], int);

int main()
{
	int m,n;
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	int a[100],b[100];
	Nhap(a, m);
	Nhap(b, n);
	cout<<"So lan xuat hien: "<<DemCon(a, m, b, n);
	return 0;
}

void Nhap(int a[], int n)
{
	if (n == 0)
		return;
	//srand(time(NULL));
	Nhap(a, n - 1);
	cin >> a[n - 1];
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << setprecision(4) << a[i];
	cout << endl;
}

int DemCon(int a[], int m, int b[], int n)
{
	if (m > n)
		return 0;
	int dem = 0;
	for (int vt = 0; vt <= n - m; vt++)
	{
		int flag2 = 1;
		for (int i = 0; i < m; i++)
			if (b[i + vt] != a[i])
				flag2 = 0;
		if (flag2 == 1)
		{
			dem++;
		}

	}
	return dem;
}

