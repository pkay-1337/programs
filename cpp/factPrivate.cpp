#include <iostream>
class num{
    private:
        int x = 5;
    public:
        friend void fact(num &n);
};

void fact(num &n){
    int x = n.x;
    long f = 1;
    for(int i = 1; i <=x; i++){
        f = f*i;
    }
    cout << "Factorial of " << x << " is : " << f << endl;
};

int main (int argc, char *argv[]){
    num a;
    fact(a);
    return 0;
};

