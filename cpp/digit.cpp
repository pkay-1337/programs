#include <iostream>
using namespace std;

int main (int argc, char *argv[])
{
    char num[20];
    int i,c=0;
    cout << "Enter Number : ";
    cin >> num;
    for (int i = 0; num[i] != '\0'; i++) {
        if ( num[i] >= 48 && num[i] <=57) {
            c++;
        }
    }
    cout << "Number of dight = " << c << endl;
    return 0;
}
