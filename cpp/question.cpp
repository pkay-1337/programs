// WAP to implement the following class diagram using specific type of inheritance.#include <iostream>
#include <iostream>
class Academic{
    public:
        int salary, id;
        string company;
        string post;
        string college;
};
class physical{
    protected:
    float height, weight;
    string blood_group;
};
class PIS: public Academic, public physical{
    protected:
        string name;
    public:
        void get(){
            cout << "Enter Name, Id, Salary and Post of Employee : " ;
            cin >> name >> id >> salary >> post;
            cout << "Enter college name : ";
            cin >> college;
            cout << "Enter height, weight and blood group : ";
            cin >> height >> weight >> blood_group;
        }
        void put(){
            cout << "Name = " << name << endl << "Employee Id = " << id << endl << "Salary = " << salary << endl << "Post = " << post << endl;
            cout << "Height = " << height << endl << "Weight = " << weight << endl << "Blood Group = " << blood_group << endl;
            cout << "-----------------------------------" << endl;
        }
};
int main (int argc, char *argv[])
{
    PIS p1;
    p1.get();
    cout << "-----------------------------------" << endl; 
    p1.put();
    return 0;
}
