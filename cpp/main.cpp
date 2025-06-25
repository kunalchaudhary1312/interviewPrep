#include <iostream>
using namespace std;

// Defining a class
class Car {
  public:
    // Data members
    string brand;
    int speed;

    // Member function
    void drive() {
        cout << brand << " is driving at " << speed << " km/h" << endl;
    }
};

int main() {
    // Creating objects
    Car car1;
    car1.brand = "Toyota";
    car1.speed = 100;

    Car car2;
    car2.brand = "BMW";
    car2.speed = 150;

    // Calling the function
    car1.drive();
    car2.drive();

    return 0;
}
