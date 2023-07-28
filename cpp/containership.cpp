#include <iostream>
/**
  containership means one thing can have another thing.
  In c++, containership means one class can use another class 
  as object or one meathod can use another meathod inside the class.

*/

class test{
    int num;
    public:
        void in(){
            cout << "Enter number :";
            cin >> num;
        }
        void disp(){
            cout << "Number  = " << num << endl;
        }
};

class a{
    test t;
    public:
        void show(){
            t.in();
            t.disp();
        }
};

int main (int argc, char *argv[])
{
    a x;
    x.show();
    return 0;
}
