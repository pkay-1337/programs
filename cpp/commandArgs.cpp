#include <iostream>
int main (int argc, char *argv[])
{
    int sum = 0;
    for(int i = 1; i<argc; i++){
        sum = sum + atoi(argv[i]);
    }
    cout << "SUM = " << sum << endl;
    return 0;
}
