#include <iostream>
#include <fstream>
using namespace std;
/*
ifstream obj("file",mode);

or

ifstream obj;
obj.open("file",mode);
*/

void inputToOutput(){
    int x;
    string n;
    ofstream fout("output");
    ifstream fin("input");
    while(!fin.eof()){
            fin >> x;
            fout << x;
            fin >> n;
            fout << " " << n << endl;
    }
}

void printProgram(){
    int line = 1;
    ifstream fin("file.cpp");
    char c;
    while((c=fin.get()) != EOF) {
        if(c=='\n') line++;
    }
    cout << "Lines = " << line << endl;

    fin.close();
}

int main(){
    inputToOutput();
    printProgram();
}




















