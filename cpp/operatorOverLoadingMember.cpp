#include <iostream>

class test{
    private:
        int x;
    public:

        test(int a=0){
            x = a;
        };

        int operator-(){
            x = -x;
            return x;
        };
        void show(){
            cout << "x === " << x << endl;
        };

        friend void operator++(test &obj);

        void operator=(string s){
            cout << s << endl;
        };

        test operator+(test &t){
            test z;
            z.x = x + t.x;
            return z;
        };
};

void operator++(test &obj){
    obj.x = ++obj.x;
    cout << "Friend| value of x = " << obj.x << endl;
};

int main (int argc, char *argv[])
{
    test a(10),b(20),c;
    cout << -a << endl;
    a = "Pkay";
    a = "deempak";
    //cout << a+b << endl;
    c = a+b;
    c.show();
    ++a;
    return 0;
}
