#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int DemGiaTri(int[][100], int, int, int);
int ChuSoDau(int);


int main()
{
    int a[100][100];
    int m, n,k;
    Nhap(a, m, n);
    Xuat(a, m, n);
    cout << "Nhập cột :";
    cin >> k;
    cout << "số lượng số nguyên có chữ số đầu tiên là chữ số chẵn trên cột đã cho là : " << DemGiaTri(a, m, n, k);
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

int DemGiaTri(int a[][100], int m, int n, int c)
{
    if (m == 0)
        return 0;
    int dem = DemGiaTri(a, m - 1, n, c);
    if (ChuSoDau(a[m - 1][c]) % 2 != 0)
        dem = dem + 1;
    return dem;
}

int ChuSoDau(int n)
{
    int s = 0;
    while (n != 0)
    {
        s = n % 10;
        n = n / 10;
    }
}