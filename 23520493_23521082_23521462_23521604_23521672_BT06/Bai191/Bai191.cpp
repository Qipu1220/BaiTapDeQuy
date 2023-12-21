#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define MAX 2000
using namespace std;

void Nhap(float[], int);
void Xuat(float[], int);


int main()
{
	float a[MAX];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
}
