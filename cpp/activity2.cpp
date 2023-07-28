#include <iostream>
class test{
    private:
        int x;
        static int rec;
    public:
        test(int a){
            x = a;
            rec++;
        }
        void show(){
            cout << "x = " << x << endl;
        }

        void showRec(){
            cout << "rec = " << rec << endl;
        }
};
int test::rec;
int main (int argc, char *argv[])
{
    test a(10), b(20);
    a.show();
    b.show();
    a.showRec();
    b.showRec();
    return 0;
}
