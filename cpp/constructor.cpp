/*
Constructor is a special member function of the class.
    it is special because it's name is same as the class name.
    It is called automatically whenever we create an object of the class.

    Constructor can be used for inttialisation of variables, opening files, opening other resources etc.
    because it is called automatically by the object so, it always is defined inside public scope.

    In a class we can define one or more Constructors as per requirements.                           
    The Constructor that has no parameters is normally known as default constructor.
    In case of defining multiple constructors each constructor signature must differ from each other.
    hence it uses the concept of function overloading. it is called constructor overloading.

    constructor has parameters but no return type even void.

    Types of constructor :
        default constructor :
            The constructor with no parameter is default parameter.
            It is associated with all the objects
            The basic purpose of it is to allocate the memory for the objects.

        parameterized constructor 
            parameterized constructor is the constructor that has parameters.
            These parameters recieve values passed as argument from object position

        copy constructor
            it is a constructor that can be used for the object to copy the existing object values to new objects.
            it is always parameterized and at parameter position it accept the refference of an existing object.
*/

#include <iostream>

class fruit{
    private:
        string name;
        string color;
    public:
        fruit(string n){
            name = n;
        }
        fruit(string n, string c){
            name = n;
            color = c;
        }
        fruit(fruit &m){
            name = m.name;
            color = m.color;
        }
        void show(){
            cout << "Name : " << name << endl;
            cout << "Color : " << color << endl;
            //cout << "Color : " << color << endl;
        }
};

int main (int argc, char *argv[])
{
    fruit mango("mango","Yellow");
    mango.show();
    fruit grape("Grape");
    grape.show();
    fruit malda(mango);
    malda.show();
    
    return 0;
}
