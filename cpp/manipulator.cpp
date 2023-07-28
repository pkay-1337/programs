#include <iostream>
#include <iomanip>
/**

Manipulator is the feature of cpp.
That provides the facility to manipulate the data format 
Which is going to be printed 

Cpp provides 2 way to to use Manipulators With out put (cout)
  1. As a method
        class.method
        width()
        precision()
        fill()
        setf() 

  2. As a  Constraint Manipulator
        << Manipulator 
        setw()
        setprecision() Specify decimal position
        setfill() - fill space with a character
        setiosflags() - used for defining multiple formatting like alignment,
                        number system, scientific notation etc.
                        To use it, it uses flags as parameter
                            ios::left
                            ios::right
                            ios::dec
                            ios::oct
                            ios::hex
                            ios::scientific
                            endl
                            flush - it is used for releasing the buffer memory allocated by cout or ostream during outputting.
  

*/

int main()
{
    int x = 5;
    double y = 56.78353459;

    cout << setw(5) << x << endl;
    cout.width(5);
    cout << x << endl;
    
    cout.precision(4);
    cout << y << endl;

    int z = 5;
    cout << setw(5) << setfill('$') << z << endl;
    cout.width(5);
    cout.fill('*');
    cout << z << endl;

    int a = 12;
    cout.width(5);
    cout << a << endl;
    
    cout.width(5);
    cout.setf(ios::left);
    cout << a;
    cout << 5 << endl;
    
    cout << setw(5) << a << setiosflags(ios::left) << a << endl;
    
    cout.width(5);
    cout.setf(ios::oct);
    cout << a << "12 in octal" << endl;
    cout.width(5);
    cout.setf(ios::hex);
    cout << a << "12 in Hexadecimal" << endl;;
    return 0;
}

