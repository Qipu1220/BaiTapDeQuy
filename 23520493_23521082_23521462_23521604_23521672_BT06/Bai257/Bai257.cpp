#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int ktCotGiam(int[][100], int, int, int);


int main()
{
    int a[100][100];
    int m, n, k;
    Nhap(a, m, n);
    Xuat(a, m, n);
    if (ktCotGiam(a, m, n,k) == 1)
        cout << "Cot giam";
    else
        cout << "Cot khong giam";
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

int ktCotGiam(int a[][100], int m, int n, int c)
{
    if (m == 1)
        return 1;
    if (a[m - 2][c] >= a[m - 1][c] && ktCotGiam(a, m - 1, n, c) == 1)
        return 1;
    return 0;
}