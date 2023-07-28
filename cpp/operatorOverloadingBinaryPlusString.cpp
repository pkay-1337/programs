#include <iostream>
#include <string.h>

class test{
    private:
        char str[50];
    public:
        void input(){
            cout << "Enter String : ";
            cin >> str;
        }
        void output(){
            cout << "Your Output : " << str << endl;
        }
        test operator+(test &x){
            test z;
            strcat(str, x.str);
            strcpy(z.str, str);
            return z;
        }
};

int main (int argc, char *argv[])
{
    test x,y,p;
    x.input();
    x.output();
    y.input();
    y.output();
    p = x+y;
    p.output();
//    x.output();
    return 0;
}
