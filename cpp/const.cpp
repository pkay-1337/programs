#include <iostream>

const class test{
    public:
        virtual void x() 
        {
            cout << "Hello World" << endl;
        }
};

/*
class test2 : public test{
    public:
    void x(){
        cout << "HI" << endl;
    }
};
*/

int main (int argc, char *argv[])
{
    test b;
    b.x();
    return 0;
};
