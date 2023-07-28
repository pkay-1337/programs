#include <iostream>
using namespace std;

class MyClass {
public:
    static void printMessage() {  // static method
        cout << "Hello, world!" << endl;
    }
};

int main() {
    MyClass::printMessage();  // calling a static method
    
    return 0;
}

