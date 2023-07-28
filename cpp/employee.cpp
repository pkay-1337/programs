#include <iostream>
class Manager{
    protected:
        int rank;
};
class Employee : public Manager{
    public:
        int empno;
        string name;
        void getData(){
            cout << "Enter employee id : ";
            cin >> empno;
            cout << "Enter Employee Name : ";
            cin >> name;
            cout << "Rank of the manager : ";
            cin >> rank;
        }
        void showData(){
            cout << "Rank of Manager = " << rank << endl;
            cout << "Employee ID = " << empno << endl;
            cout << "Employee Name = " << name;
        }
};
int main (int argc, char *argv[])
{
    Employee emp1,emp2;
    emp1.getData();
    emp2.getData();
    emp1.showData();
    emp2.showData();


    return 0;
}
