#include <iostream>
//WAP 
class Length{
    protected:
        int len;
};
class Breadth : protected Length{
    protected:
        int breadth;
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
    Data x;
    x.in();
    x.out();
    return 0;
}

