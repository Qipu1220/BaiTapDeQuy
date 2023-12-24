#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void SapCotTang(float[][100], int, int, int);


int main()
{
    float a[100][100], b[100][100];
    int m, n, k;
    cin >> k;
    Nhap(a, m, n);
    Xuat(a, m, n);
    SapCotTang(a, m, n, k);
}



void Nhap(float a[][100], int& m, int& n)
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

void Xuat(float a[][100], int m, int n)
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

void SapCotTang(float a[][100], int m, int n, int c)
{
    if (m == 1)
        return;
    for (int i = 0; i <= m - 2; i++)
        if (a[i][c] > a[m - 1][c])
            swap(a[i][c], a[m - 1][c]);
    SapCotTang(a, m - 1, n, c);

}