#include <iostream>
#include <string>
#include <sstream>

//convertion of a string to integer.

using namespace std;

int main()
{
	int age;
	string mystr;

	cout << "Enter your age please.\n";
	
	getline(cin,mystr);
	stringstream(mystr) >> age;
	cout << "you are " << age << " years old then!" << endl;



	return (0);
}
