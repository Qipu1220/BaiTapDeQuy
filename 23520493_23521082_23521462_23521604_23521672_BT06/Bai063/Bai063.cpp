#include <iostream>
using namespace std;

void Tower(int n, char a, char b, char c);

int main()
{
	int n;
	cin >> n;
	char a = 'a', b = 'b', c = 'c';
	Tower(n, a, b, c);
	return 0;
}

void Tower(int n, char a, char b, char c)
{
	if (n == 1)
	{
		cout << "\t" << a << " ----> " << c << endl;
		return;
	}
	Tower(n - 1, a, c, b);
	Tower(1, a, b, c);
	Tower(n - 1, b, a, c);
}