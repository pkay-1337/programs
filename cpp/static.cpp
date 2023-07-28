#include <iostream>
class test{
    private:
        int x;
        static int rec;
    public:
        void getData(){
            rec++;
            cout << "Enter Number : ";
            cin >> x;
        }
        void putData(){
            cout << "Value = " << x << endl;
        }
       static void showRec(){
            cout << "Record = " << rec  << endl;
        }
};
int test :: rec;
int main (int argc, char *argv[])
{
    test a,b;
    a.getData();
    b.getData();
    a.putData();
    b.putData();
    a.showRec();
    b.showRec();
    test :: showRec();
    return 0;
}
