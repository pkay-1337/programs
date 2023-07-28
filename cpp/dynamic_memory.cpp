#include <iostream>

class test{
    private:
        int *p;
    public:
        test(){
            p = new int;
        }
        void input(){
            cout << "Enter Number : ";
            cin >> *p;
        }
        void show(){
            cout << "Value = " << *p << endl;
        }
        ~test(){
            delete p;
        }
};
int main (int argc, char *argv[])
{
    test t;
    t.input();
    t.show();
    return 0;
}
