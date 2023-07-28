#include <iostream>

class Fact{
    public:
        int f=1;
    Fact(int x){
        while(x > 0){
            f = f*x;
            x--;
        }
    }
    void result(){
        cout << "Factorial = " << f << endl;
    }
};
int main (int argc, char *argv[])
{
    int x;
    cout << "enter number : ";
    cin >> x;
    Fact a(x);
    a.result();
    return 0;
}
