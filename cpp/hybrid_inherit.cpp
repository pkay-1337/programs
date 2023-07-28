#include <iostream>

class person{
    protected:
        string name, gender;
        int age;
};
class faculty : protected person{
    protected:
        string post, department;
};
class publication : public faculty{
    protected:
        int research, jouranl, article;
};
class student : public person{
    protected:
        int id;
        string course;
};

int main (int argc, char *argv[])
{
    
    return 0;
}
