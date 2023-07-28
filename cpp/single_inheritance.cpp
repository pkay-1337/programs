#include <iostream>
/*
class A{
    protected:
        int a;
};
class B : public A{
    protected:
        int b;
    public:
        void in();
        void out();
};
void B :: in(){
    cout << "Enter a Number in a : ";
    cin >> a;
    cout << "Enter a Number in b : ";
    cin >> b;
}
void B :: out(){
    cout << "Sum = " << a+b << endl;
}
int main (int argc, char *argv[])
{
    B b;
    b.in();
    b.out();
    return 0;
}
*/
class Length{
    protected:
        int len;
};
class Breadth : protected Length{
    protected:
        int breadth;
    /*
    public:
        void in();
        void out();
    */
};
class Data: public Breadth{
    public:
        void in();
        void out();
};
void Data:: in(){
    cout << "Enter Length : ";
    cin >> len;
    cout << "Enter Breadth : ";
    cin >> breadth;
}
void Data:: out(){
    cout << "Area = " << len*breadth << endl;
    cout << "Perimeter = " << 2*(len+breadth) << endl;
}
int main (int argc, char *argv[])
{
    Data b;
    b.in();
    b.out();
    return 0;
}
