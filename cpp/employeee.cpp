#include <iostream>

class Data{
    public:
        int salary,id;
        string name;
        string post;
};
class physical_data{
    float height, weight;
    string hair_color;
};
class Employee : public Data{
    public:
        void get(){
            cout << "Enter Name, Id, Salary and Post of Employee : " ;
            cin >> name >> id >> salary >> post;
        }
        void put(){
            cout << "Name = " << name << endl << "Employee Id = " << id << endl << "Salary = " << salary << endl << "Post = " << post << endl;
            cout << "-----------------------------------" << endl;
        }
};
int i;
int main ()
{
    Employee emp1, emp2, emp3, emp4, emp5;
    emp1.get();
    emp2.get();
    emp3.get();
    emp4.get();
    emp5.get();

    cout << "-------------------------------------" <<endl;
    
    emp1.put();
    emp2.put();
    emp3.put();
    emp4.put();
    emp5.put();

    return 0;
}
