#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
  // Pure virtual function
  const virtual double area() = 0;
};

// Derived class that implements Shape
class Rectangle : public Shape {
public:
  Rectangle(double w, double h) : width(w), height(h) {}//member function initializer
  double area() { return width * height; }
private:
  double width, height;
};

int main() {
  // Shape s; // Error: cannot instantiate abstract class
  Rectangle rect(2.0, 3.0);
  cout << "Rectangle area: " << rect.area() << endl;
  return 0;
}
