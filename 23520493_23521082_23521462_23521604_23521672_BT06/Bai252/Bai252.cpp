#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int TonTaiDuong(int [][100], int, int);


int main()
{
    int a[100][100];
    int m, n, k;
    Nhap(a, m, n);
    Xuat(a, m, n);
    if (TonTaiDuong(a, m, n) == 1)
        cout << "Ton tai duong";
    else
        cout << "Khong ton tai duong";
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

int TonTaiDuong(int a[][100], int m, int n)
{
    if (m == 0)
        return 0;
    for (int j = 0; j < n; j++)
        if (a[m - 1][j] > 0)
            return 1;
    return TonTaiDuong(a, m - 1, n);
}