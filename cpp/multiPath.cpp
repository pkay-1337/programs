#include <iostream>
class A{
    public:
        int ID;
        string name;
};
class B : public virtual A{
    public:
        int marks1;
        B(int a, int b, int c, int d, int e){
            marks1 = a+b+c+d+e;
        }
};
class C : public virtual A{
    public:
        int marks2;
        C(int a, int b, int c, int d, int e){
            marks2 = a+b+c+d+e;
        }
};
class D : public B, public C{
    public:
        int percentage;
        string grade;
        D():C(45,36,99,86,43),B(76,45,34,99,65){
            percentage = (marks2+marks1)/10;
        };
};
int main (int argc, char *argv[])
{
    D x;
    cout <<"1st Semester Marks = " <<  x.marks1 << endl;
    cout <<"2nd Semester Marks = " << x.marks2 << endl;
    cout << "Total Percentage = " << x.percentage << " %" << endl;
    return 0;
}



