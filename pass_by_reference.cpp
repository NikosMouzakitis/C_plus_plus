#include <iostream>
using namespace std;

/*  Passing arguments by value.
void dupl(int a, int b)
{
	a += 3;
	b += 2;
}*/


// Passing arguments by reference.
void dupl(int &a, int &b)
{
	a += 3;
	b += 2;
}
int main()
{
	int a,b;

	a = b = 1;

	dupl(a,b);

	cout << "a = " << a << " b = " << b << endl;

	return (0);
}
