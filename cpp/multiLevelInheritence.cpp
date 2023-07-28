#include <iostream>
class A{
    protected:
        int a;
};
class B : private A{
    protected:
        int b;
};
class C : public B{
    public:
        void in();
        void out();

};
void C :: in(){
    cout << "Enter a Number in a : ";
    cin >> a;
    cout << "Enter a Number in b : ";
    cin >> b;
}
void C :: out(){
    cout << "Sum = " << a+b << endl;
}
int main (int argc, char *argv[])
{
    C x;
    x.in();
    x.out();
    return 0;
}

