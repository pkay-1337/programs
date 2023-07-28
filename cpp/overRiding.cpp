#include <iostream>

class A{
    public:
        virtual void show(){
            cout << "Hello " << endl;
        }
};

class B : public A{
    public:
        void show(){
            cout << "Hi! " << endl;
        }
};

int main (int argc, char *argv[])
{
    A *p;
    A x;
    p = &x;
    p -> show();
    B b;
    p = &b;
    p -> show();
    return 0;
}
