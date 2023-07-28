#include <iostream>
using namespace std;
int main (int argc, char *argv[])
{
    int questions,minutes;
    cin >> questions;
    cin >> minutes;
    int time_left = 240 - minutes;
    if(time_left <= 4){
        cout << 0;
        return 0;
    }

    int i = 1;
    for(i=1; i <= questions; i++){
        time_left = (time_left - (5*i));
        if(time_left < (5*(i+1))){
            cout << i;
            return 0;
        }
    }
    cout << i-1;
    return 0;
}
