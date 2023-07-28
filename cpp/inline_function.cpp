#include <iostream>
//Inline function in cpp is similar like macro in c Programming 
//It means it also works like a macro in cpp
//Unlike macro, Inline function contain block of statements
//If we want to make any function or meathod as inline then we have to use inline keyword

//The inline function follows Some Rules that differentiates it than other function
/*
    1. Indine does not contain loop
    2. it can't be recursive
    3. inline does not contain goto statements
    4. it does not contain return statements
    5. etc
*/  
// If we define function or meathod inside a class And that follows the above rules then that will automatically be inline function no matter u are using inline keyword or not. But if u define an inline meathod outside the class then it is required to put inline keyword.
// If any Inline function denies the above rules then that will automatically be converted to a normal function.

class test{
    private:
        int x,y;
    public:
        inline int input(){
            cout << "Enter 2 numbers : ";
            cin >> x >> y;
            return x;
        }
        void show(){
            cout << "Sum = " << x+y << endl;
        }
};
int main (int argc, char *argv[])
{
    test t;
    t.input();
    t.show();
        
    return 0;
}
