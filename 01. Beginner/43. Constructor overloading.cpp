#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double width;
    double height;

public:
    // Default constructor
    Box() {
        length = 0.0;
        width = 0.0;
        height = 0.0;
    }

    // Constructor with one parameter
    Box(double side) {
        length = side;
        width = side;
        height = side;
    }

    // Constructor with three parameters
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    // Function to calculate the volume of the box
    double volume() {
        return length * width * height;
    }
};

int main() {
    Box box1;            // Calls default constructor
    Box box2(5.0);       // Calls constructor with one parameter
    Box box3(3.0, 4.0, 5.0); // Calls constructor with three parameters

    cout << "Volume of box1: " << box1.volume() << endl;
    cout << "Volume of box2: " << box2.volume() << endl;
    cout << "Volume of box3: " << box3.volume() << endl;

    return 0;
}
