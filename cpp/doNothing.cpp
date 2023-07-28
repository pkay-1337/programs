#include <iostream>
class A{
    protected:
        int a;
    public:
        A(int m){
            a = m;
        }

        A(){};

        ~A(){
            cout << "a = " << a << endl;
        }
};

int main (int argc, char *argv[])
{
    A obj1(2),obj2;
    return 0;
}

