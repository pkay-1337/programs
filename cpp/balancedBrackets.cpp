#include <iostream>

int main (int argc, char *argv[])
{
    int testCase;
    int len,len2=0;
    string s;
    cin >> testCase;
    int output[testCase]; 
    for(int i=0; i<testCase; i++){
        int result = 0;
        cin >> len;
        cin >> s;
        int opening = 0,closing = 0;
        for(int j = 0; j < len; j++){
            if(s[j] == '('){
                opening++;
            }
            if(s[j] == ')'){
                closing++;
            }
            if(opening != 0 && closing != 0){
                if(opening == closing){
                    result++;
                }
            }
        }
        output[i] = result;
    }
    for(int i = 0; i < testCase; i++){
        cout << output[i] << endl;
    }
    return 0;
}   
