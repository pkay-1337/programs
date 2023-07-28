#include <iostream>
using namespace std;
int main (int argc, char *argv[])
{
  int n,c=0,i;
  cout << "Enter no. : " ;
  cin >> n;
  for ( i = 2; i <= n/2; i++) {
    if(n%i == 0){
      cout << "Not Prime!" << endl;
      break;
    }
  }
  if(i > n/2) 
    cout << "It is a Prime Number!" << endl;
  return 0;
}

