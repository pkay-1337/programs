#include <iostream>
using namespace std;
int main (int argc, char *argv[])
{
  int a,b,c,min;
  cout << "Enter 3 numbers : " << endl;
  cin >> a >> b >> c;
  min = a;
  if(min > b) min = b;
  if(min > c) min = c;
  while( a%min != 0 || b%min != 0 || c%min != 0) min--;
  cout << "GCD = " << min << endl; 

  return 0;
}
