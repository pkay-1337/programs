// WAP in which student and faculty is derived from person with pure virtual function

class Person{
    public:
        string Name;
        void getData(){
            cout << "Enter name : ";
            cin >> Name;
        }
        virtual void display() = 0; 
};
void Person::display(){};
class Student : public Person{
    protected:
        int sid;
    public:
        void getData(){
            Person::getData();
            cout << "Enter SID : ";

        }
}
