#include <iostream>
using namespace std;
int main (int argc, char *argv[])
{
  int a,b,c,d;
  cout << "Enter 4 numbers : ";
  cin >> a >> b >> c >> d;
  int max;
  max = a;
  if (max < b) {
    max = b;
  }
  if (max < c) {
    max = c;
  }
  if (max < d) {
    max = d;
  }
  cout << max << endl;
  return 0;
}
