#include <iostream>

class test{
    private:
        int x;
    public:
        test(int arg){
            x = arg;
        }
        friend void display(test &t);
};
void display(test &t){
    cout << "private x = " << t.x << endl;
};
int main (int argc, char *argv[])
{
    test m(18);
    display(m);
    return 0;
}
