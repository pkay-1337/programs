#include <iostream>

string message; 
class A{
    public:
        A(string para){
            cout << "hello " << para << endl;
        }
};

class B : public A{
    public:
        B(string para):A(message){
            cout << "Hello " << para << endl;
        }

};

int main (int argc, char *argv[])
{
    cout << "Enter message : ";
    cin >> message;
    B x("Worlddddd!");

    return 0;
}
