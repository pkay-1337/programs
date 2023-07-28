/*
#include <iostream>

using namespace std;

class Person {
public:
  string name;
  int age;

  Person(string name, int age) : name(name), age(age) {}
};

operator=(ostream& os, const Person& person) {
  os << person.name << " is " << person.age << " years old";
}

int main() {
  Person person("John Doe", 30);

  cout = person ;

  return 0;
}
*/


/*
#include <iostream>

using namespace std;

class Person {
public:
  string name;
  int age;

  Person(string name, int age) : name(name), age(age) {}

  // This is the overloaded operator= function
  // It takes an std::ostream object and a Person object as its arguments
  // It writes the Person object to the std::ostream object
  std::ostream& operator=(std::ostream& os, const Person& person) {
    os << person.name << " is " << person.age << " years old";
    return os;
  }
};

int main() {
  Person person("John Doe", 30);

  // This line now works, because the overloaded operator= function is defined in the Person class
  cout = person ;

  return 0;
}
*/
#include <iostream>

using namespace std;

class Person {
public:
  string name;
  int age;

  Person(string name, int age) : name(name), age(age) {}

  // This is the overloaded operator= function
  // It takes an std::ostream object as its argument
  // It writes the Person object to the std::ostream object
  void operator=(std::ostream& os) {
    os << name << " is " << age << " years old";
  }
};

int main() {
  Person person("John Doe", 30);

  // This line now works, because the overloaded operator= function is defined in the Person class
  person = cout;

  return 0;
}
