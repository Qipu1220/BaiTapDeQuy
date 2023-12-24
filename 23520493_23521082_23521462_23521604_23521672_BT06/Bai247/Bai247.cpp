#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float [] [100] , int&, int&);
void Xuat(float[][100], int, int);
float DuongNhoNhat(float[][100], int, int);

int main()
{
    float a[100][100];
    int m, n, k;
    Nhap(a, m, n);
    Xuat(a, m, n);
    cout << "So duong nho nhat la: " << DuongNhoNhat(a, m, n);
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

float DuongNhoNhat(float a[][100], int m, int n)
{
    if (m == 0)
        return 0;
    float lc = DuongNhoNhat(a, m - 1, n);
    for (int j = 0; j < n; j++)
        if (a[m - 1][j] > 0)
            if (lc == 0 || a[m - 1][j] < lc)
                lc = a[m - 1][j];
    return lc;
}