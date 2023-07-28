#include <iostream>
int main (int argc, char *argv[])
{
    int a=5,i;
        i = ++a + ++a + a++;
        i = a++ + ++a + ++a;
        a = ++a + ++a + a++;
    cout << "a = " << a << "\ni = " << i << endl;
    return 0;
}
