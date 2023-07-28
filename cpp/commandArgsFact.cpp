#include <iostream>
//using namespace std;
void fact(long x){
    long f = 1;
    for(int i = 1; i <=x; i++){
        f = f*i;
    }
    cout << "Factorial of " << x << " is : " << f << endl;
}
int main (int argc, char *argv[]){
    for(int i = 1; i<argc; i++){
        fact(atol(argv[i]));
    }
}
