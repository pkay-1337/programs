#include <iostream>
/*
    Default arguments are the arguments or parameters those are initialised with some value at the time of function definition.
    The advantage of default arguments over function overloading means if we define a function that have total 3 parameters where 2 parameters are Default
    parameter THEN it will be called for one arguments or 2 arguments or 3 arguments.

    when we make parameters as default, during function definition then it must be it right to left in sequencial manner no matter you r making 1,2 or 3 default 
    parameters.

    whenever we invoke the function that have default parameters then parameter will justify correspondingly the arguments values in left to right manner.

    we can also make the concept  of function overloading using default arguments function butt those signaturemust differ from other functions
*/
int main (int argc, char *argv[])
{
    class test{
        public:
            void sum(int x, int y=0, int z = 0){
                cout << "Sum = " << (x+y+z) << endl;
            }
            //void sum(int x){
            //    cout << "Over Loaded Number = " << x << endl;
            //}
            //void sum(int x, int y){
            //    cout << "Sum = " << (x+y) << endl;
            //}
            //void sum(int x, int y, int z){
            //    cout << "Sum = " << (x+y+z) << endl;
            //}
    };
    test t;
    t.sum(5,21);
    t.sum(6,2);
    return 0;
}
