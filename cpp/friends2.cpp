#include <iostream>
class test2;
class test1{
    private:
        int x;
    public:
        test1(int z){
            x = z;
        }
        void show(){
            cout << "No = " << x << endl;
        }
        friend void max(test1 t1, test2 t2);
};
class test2{
    private:
        int x;
    public:
        test2(int z){
            x = z;
        }
        void show(){
            cout << "No = " << x << endl;
        }
        friend void max(test1 t1, test2 t2);
};
void max(test1 t1, test2 t2){
    t1.x > t2.x ? (cout << "t1 " << t1.x << " is bigger" << endl) : (cout << "t2 "<< t2.x << " is bigger" << endl);
}
int main (int argc, char *argv[])
{
    test1 m(18);
    test2 n(20);
    max(m,n);

    return 0;
}

