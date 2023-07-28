#include <iostream>
using namespace std;
int main (int argc, char *argv[])
{
  int month;
  cout << "Enter month number : ";
  cin >> month;
  /*
  switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 9:
    case 10:
    case 12:
      cout << "31 DAYS" << endl;
      break;
  }
  switch (month){
    case 4:
    case 6:
    case 8:
    case 11:
      cout << "30 DAYS" << endl;
      break;
  }
  switch (month){
    case 2:
      cout << "28 or 29 DAYS" << endl;
  }
  */
  if(month == 1 || month == 3 || month == 5 || month == 7 || month == 9 || month == 10 || month == 12){
    cout << "31 DAYS" << endl;
  }else if(month == 4 || month == 6 || month == 8 || month == 11){
    cout << "30 DAYS" << endl;
  }else if(month == 2){
    cout << "28 or 29 DAYS" << endl;
  }else{
    cout << "Input must be number between 1 & 12" << endl;
  }
  return 0;
}
