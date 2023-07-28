/*
   
   */
#include <iostream>
//using namespace std;

int main (int argc, char *argv[])
{
    /*
    int num[5],i;
    cout << "Enter 5 Numbers : ";
    for (int i = 0; i < 5; i++) {
        cin >> *(num + i);
    }
    for (int i = 0; i < 5; i++) {
        cout << *(num + i) << endl;
        
    }
    */
    
    int num[5];
    int *q;
    q = &num[0];

    cout << "Address of num array : " << num << endl;
    cout << "Address of base of num array : " << q << endl;
    cout << "Addredd of q pointer : " << &q << endl;
    cout << "Difference = " << (int) q - (int) &q << endl;
    cout << sizeof(q)<< endl;
    
    return 0;
}
