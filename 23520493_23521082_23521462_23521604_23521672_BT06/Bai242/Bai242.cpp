#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int NguyenToDau(int[][100], int, int);
bool ktNguyenTo(int);

int main()
{
    int a[100][100];
    int m, n, k;
    Nhap(a, m, n);
    Xuat(a, m, n);
    cout << "So nguyen to dau tien la: " << NguyenToDau(a, m, n);
}



void Nhap(int a[][100], int& m, int& n)
{
    cout << "Nhap so hang m: ";
    cin >> m;
    cout << "Nhap so cot n: ";
    cin >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
        }
    }
}

void Xuat(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(8) << a[i][j];
        }
        cout << "\n";
    }
}

int NguyenToDau(int a[][100], int m, int n)
{
    if (m == 0)
        return -1;
    int lc = NguyenToDau(a, m - 1, n);
    if (lc != -1)
        return lc;
    for (int j = 0; j < n; j++)
        if (ktNguyenTo(a[m - 1][j]))
            return a[m - 1][j];
    return -1;
}

bool ktNguyenTo(int n)
{
    for (int j = 2; j <= n - 1; j++)
        if (n % j == 0)
            return false;
    return true;
}