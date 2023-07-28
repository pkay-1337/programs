#include <iostream>

template<class T>
T sum(T a, T b){
    return a+b;
}

int main (int argc, char *argv[])
{
    /*template<class x>
        x a,b;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    cout << "Sum = " << sum(a,b);
    */
    int a = 45, b = 70;
    double c = 32.89, d = 54.89;
    char e = '7', f = '8';
    cout << "Sum = " << sum(a,b) << endl;
    cout << "Sum = " << sum(c,d) << endl;
    cout << "Sum = " << sum(e,f) << endl;
    return 0;
}
