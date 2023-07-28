#include <iostream>

class test{
    int x;
    public:
        void getData(){
            cout << "Enter Number : ";
            cin >> x;
        }
        void putData(){
            cout << "x = " << x << endl;
        }
};
int main (int argc, char *argv[])
{
    test *p;
    p = new test();
    p -> getData();
    (*p).putData();
    delete p;
    return 0;
}
