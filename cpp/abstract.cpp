#include <iostream>

class A{
    public:
        virtual void show() = 0;
        void display(){
            cout << "Hello gal " << endl;
        }
};
class B : public A{
    public:
        void show(){
            cout << "Meow" << endl;
        }
};
int main (int argc, char *argv[])
{
    B b;
    b.show();
    b.display();
    //A a;
    return 0;
}
