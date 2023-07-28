#include <iostream>
class Student{
    protected:
        int roll;
        string name;
}
class Fees : protected Student{
    public:
    int fee,amount;
    void submit_fee(){
        cout << "Enter Amount : ";
        cin >> amount;
        fee = fee - amount; 
    }
    void recipt(){
        cout << name << " Have to pay " << fee << "."<< endl;
    }
}
class Result : protected Student{
    protected:
        int marks;
        string grade;
    public:
        void show_result(){
            cout << "PASS" << endl;
        }
}

int main (int argc, char *argv[])
{
    
    return 0;
}
