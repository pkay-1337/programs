#include <iostream>

int main (int argc, char *argv[])
{
    try {
        int x = 5;
        int y;
        cin >> y;
        int z = x/y;
        
        cout << z << endl;
    }
    catch (const std::exception& e) {
        cout << e.what() << endl;
        cout << "Is it working?? there's an error ig!" << endl;
    }catch(...){
        cout << "Error detected" << endl;
    }
    return 0;
}
