#include <iostream>

class Animal {
public:
  virtual void makeSound() const = 0; // Pure virtual function

  void sleep() const {
    std::cout << "Animal is sleeping." << std::endl;
  }
};

class Dog : public Animal {
public:
  void makeSound() const override {
    std::cout << "Dog barks." << std::endl;
  }
};

class Cat : public Animal {
public:
  void makeSound() const override {
    std::cout << "Cat meows." << std::endl;
  }
};

int main() {
  Dog dog;
  Cat cat;

  dog.makeSound();  // Output: Dog barks.
  cat.makeSound();  // Output: Cat meows.

  // Animal animal; // Error: Cannot instantiate an abstract class.

  Animal* animalPtr = nullptr;

  animalPtr = &dog;
  animalPtr->makeSound();  // Output: Dog barks.
  animalPtr -> sleep();

  animalPtr = &cat;
  animalPtr->makeSound();  // Output: Cat meows.
  animalPtr -> sleep();

  return 0;
}

