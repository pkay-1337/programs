#include <iostream>
// :: is resolution operator used to define method outside a class
class test
{
public:
    void input(int x){
       // cout << "Enter no. ";
       // cin >> x;
        //this -> x = x; // here x is class data and n is local meathod data
        //(*this).x = x;
        test::x = x;
    }
    void show(){
        cout << "x = " << x << endl;
    }
    void out();
    
private:
    int x;
    void outPrivate();
};

void test :: out(){
    cout << "Hello from outside." << endl;
    outPrivate();
}
void test :: outPrivate(){
    cout << "Hello from outside but private" << endl;
}

int main (int argc, char *argv[])
{
    test t;
    t.input(5);
    t.show();
    t.out();
    //cout << t.x << endl;
    return 0;
}
