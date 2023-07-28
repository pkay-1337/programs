//wap a program to find sum of number of any numbers using recursive and iterative function
#include <iostream>
int num,x,y,sum = 0;
int Sum(int x){
    if(x<=0) return sum;
    y = x%10;
    sum = sum + y;
    sum(x/10);
}
int main (int argc, char *argv[])
{
    cout << "Enter a number : ";
    cin >> num;
    cout << "sum = " << Sum(n) << endl;
    return 0;
}
