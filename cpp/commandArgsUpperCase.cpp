#include <iostream>
#include <string.h>
int main (int argc, char *argv[])
{
    for(int j = 1; j < argc; j++){
        for(int i = 0; (*(argv[j]+i)) != '\0'; i++){
            if( (*(argv[j]+i)) >= 97 && (*(argv[j]+i)) <= 132 ){
                (*(argv[j]+i)) = (*(argv[j]+i)) - 32;
            }
        }
        cout << argv[j] << endl;
    }

    return 0;
}
