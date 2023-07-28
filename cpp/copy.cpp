#include <iostream>

class print;
class boy{
    private:
        string name;
        string fav_flower;
        string race = "";
        int x = 5;
    public:
        boy(){}
        boy(string x, string y){
            name = x;
            fav_flower = y;
        }
        boy(boy &obj){
            name = obj.name;
            fav_flower = "Rose";
        }
        void print(){
            cout << "Name = " << name << endl;
            cout << "Favourite Flower = " << fav_flower << endl;
            if (race != "") cout << "Race = " << race << endl;
            cout << "---------------------------" << endl;
        }
        boy setRace(boy &z){
            boy x;
            x.race = "Indian"; 
            x.name = z.name;
            x.fav_flower = z.fav_flower;
            return x;
        }
        friend void print::display(boy &t);
};

class print{
    public:
    void display(boy &t){
        cout << "private x = " << t.x << endl;
    };
};


int main (int argc, char *argv[])
{
    boy a("Pkay","Lily");
    boy b(a);
    a.print();
    a.print();
    a = a.setRace(a);
    b = a.setRace(b);    
    a.print();
    b.print();
    print p;
    p.display(a);
    return 0;
}
