#include <iostream>
#include <fstream>

int main (int argc, char *argv[])
{
    //ofstream fout("output",ios::binary);
    ofstream fout;
    fout.open("output",ios::binary);
    int roll;
    string name;
    char ch;
    do{
        cout << "Enter Roll and Name : ";
        cin >> roll >> name;
        fout << roll << " : " << name << endl;

        cout << "Wanna input more student data ? ";
        cin >> ch;
        
    }while(ch == 'y');
    fout.close();
    return 0;
}
