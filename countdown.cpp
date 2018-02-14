#include <iostream>

using namespace std;

int main()
{
  int n;
  cout << "Enter initial vallue\n";
  cin >> n;
  
  while (n >= 0) {
    cout << n << endl;
    n--;
  }
  cout << "Countdown completed" << endl;
  
  return 0;
 }
