#include <iostream>
class emp{
    private:
        float basic_salary;
        float HRA,DA,TA;
        int medicalD = 200;
        int insuranceD = 1000;
        double final_salary;
        string name;
    public:
        emp(){
            name = __func__;
            cout << "Enter basic salary of " << name << " : ";
            cin >> basic_salary;
            HRA = basic_salary * 0.15;
            TA = basic_salary * 0.22;
            DA = basic_salary * 1.5;
        }
        void final(){
            final_salary = (basic_salary + HRA + TA + DA) - (medicalD + insuranceD); 
            cout << final_salary << endl;
        }
};
int main (int argc, char *argv[])
{
    emp ravi;
    ravi.final();
    return 0;
}
