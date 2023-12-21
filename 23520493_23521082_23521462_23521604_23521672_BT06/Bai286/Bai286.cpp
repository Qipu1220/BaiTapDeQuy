#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 200
using namespace std;


void Nhap(float[][MAX], int, int);
void Xuat(float[][MAX], int, int);
void NguyenHoa(float[][MAX], int, int);


int main()
{
	float a[MAX][MAX];
	int m, n;
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	NguyenHoa(a, m, n);
	cout << "\nMang sau khi nguyen hoa: " << endl;
	Xuat(a, m, n);
	return 0;
}
	
void Nhap(float a[][MAX], int m, int n)
{
	srand(time(NULL));
	if (m == 0)
		return;
	Nhap(a, m - 1, n);
	for (int i = 0; i < n; i++)
		a[m - 1][i] = ((float)rand() / RAND_MAX) * 200 - 100;
}


void Xuat(float a[][MAX], int m, int n)
{
	if (m == 0)
		return;
	Xuat(a, m - 1, n);
	for (int i = 0; i < n; i++)
		cout << setw(10) << fixed << setprecision(2) << a[m - 1][i];
	cout << endl;
}

void NguyenHoa(float a[][MAX], int m, int n)
{
	if (m == 0)
		return;
	NguyenHoa(a, m - 1, n);
	for (int j = 0; j < n; j++)
	{
		if (a[m - 1][j] > 0)
			a[m - 1][j] = (int)(a[m - 1][j] + 0.5);
		else
			a[m - 1][j] = (int)(a[m - 1][j] - 0.5);
	}
}
