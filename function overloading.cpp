#include <iostream>
using namespace std;
void add(int a, int b,int c, int d, int e)
{
cout << "sum = " << (a + b + c + d + e);
}

void add(double a, double b)
{
	cout << endl << "sum = " << (a + b);
}

int main()
{
	add(10, 2, 5, 6, 3);
	add(5.3, 6.2);

	return 0;
}
