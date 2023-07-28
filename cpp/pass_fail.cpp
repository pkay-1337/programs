#include <iostream>
using namespace std;
int main (int argc, char *argv[])
{
  int marks;
  cout << "Enter marks : ";
  cin >> marks;
  marks >= 50 ? cout << "PASS" << endl : cout << "FAIL" << endl;
  return 0;
}
