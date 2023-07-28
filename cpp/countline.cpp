#include <iostream>
#include <fstream>


void lines(string file){
    int line = 0;
    ifstream fin(file);
    char c;
    while((c=fin.get()) != EOF) {
        cout << c;
        if(c=='\n') line++;
    }
    cout << "Lines = " << line << endl;
    fin.close();
}

int main (int pk, char *argv[])
{
    string file;
    if(!argv[1]){
        cout << "Enter file path : ";
        cin >> file;
        lines(file);
    }else{
        lines(argv[1]);
    }
    return 0;
}
