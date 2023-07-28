#include <iostream>
int main (int argc, char *argv[])
{
    int a,b;
    try {
        cout << "Enter 2 numbers : ";
        cin >> a >> b;
        if (b == 0) throw b;
        cout << "Division = " << a/b << endl;
    }
    catch (int x) {
        cout << "Value of b : " << x << endl;
        cout << "Enter no again : ";
        cin >> x;
        cout << "Division = " << a/x << endl;
    }
    return 0;
}
