/*

   Destructor is also a speciam member function od a class.
   it's name is also same as the class name followed after a ~ sign.

   The Destructor will be called automatically whenever an object is going to be destroyed 

   The Destructor has na parameter and no returb type.
   Destructor also maybe defined in Public scope
   Destructor can be used for generating exit message, closing the opened file,
   closing the opened resources etc...

   The folloup of Destructor for objects in manner of stack(LIFO)

*/
#include <iostream>

class animal{
    public:
        void eat(){ cout << "Eating " << endl; };
        void show(){cout << "Name = " << name << endl;}
        animal(string n){
            name = n;
        }
        ~animal(){
            cout << "Bye!!!" << endl;
        }
    private:
        string name;
};
int main (int argc, char *argv[])
{
    animal dog("Dog!");
    dog.show();
    dog.eat();
    return 0;
}
