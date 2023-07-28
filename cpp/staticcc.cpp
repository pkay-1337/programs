#include <iostream>
using namespace std;

class MyClass {
public:
    static int count;  // static data member
    
    MyClass() {
        count++;
    }
};

int MyClass::count;  // initialize static data member

int main() {
    MyClass obj1, obj2, obj3;
    
    cout << "Number of objects created: " << MyClass::count << endl;
    
    return 0;
}

