#include <iostream>

class base{
    public:
        ~base(){
            cout << "virtual base des" << endl;
        }
};
class derived : public base{
    public:
        ~derived(){
            cout << "derived des" << endl;
        }
};
int main (int argc, char *argv[])
{
    //base *ptr;
    //ptr = new derived();
    //delete(ptr);
    derived d;
    return 0;
}
