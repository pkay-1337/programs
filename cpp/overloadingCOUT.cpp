#include <iostream>

using namespace std;

class Person : public ostream{
public:
  string name;
  int age;

    Person(string name, int age) : name(name), age(age) {}

    void operator=(ostream& os) {
        os << name << " is " << age << " years old";
    };
};


int main() {
  Person person("John Doe", 30);

  person = cout;

  return 0;
}
