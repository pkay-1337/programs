#include <iostream>
// Function overloading allow us 2 define functions with same name but different signatures or parameters
int sum(int a,int b){
    return a+b;
}
int sum(int a, int b, int c, int d = 0){
    return a+b+c+d;
}
void sum(){
    cout << "Nothing" << endl;
}
int main (int argc, char *argv[])
{
    cout << sum(5,6) << endl;
    cout << sum(10,20,30) << endl;
    sum();
    
    return 0;
}
