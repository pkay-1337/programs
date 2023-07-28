#include <iostream>
using namespace std;
int main (int argc, char *argv[])
{
  int marks;
  cout << "Enter marks : ";
  cin >> marks;
  if(marks < 0 || marks > 500){
    cout << "INVALID MARKS" << endl;
  } else if (marks >= 300) {
    cout << "1st division" << endl;
  } else if (marks >= 200) {
    cout << "2nd division" << endl;
  } else if (marks >= 150) {
    cout << "3rd division" << endl;
  } else{
    cout << "FAIL" << endl;
  }
  return 0;
}
