#include <iostream>
#include <cmath> // Include cmath for mathematical functions like pow() and M_PI

using namespace std;

int main() {
    int choice;
    cout << "Choose a shape to calculate its area:\n";
    cout << "1. Square\n";
    cout << "2. Trapezoid\n";
    cout << "3. Circle\n";
    cout << "4. Sector\n";
    cout << "5. Ellipse\n";
    cout << "6. Triangle\n";
    cout << "7. Parallelogram\n";
    cout << "8. Regular Polygon (e.g., hexagon)\n";
    cout << "Enter your choice (1-8): ";
    cin >> choice;

    switch (choice) {
        case 1: { // Square
            cout << "Calculating area of square\n";
            double side, area;
            cout << "Enter the side length: ";
            cin >> side;
            area = side * side;
            cout << "Your square area is: " << area << endl;
            break;
        }
        case 2: { // Trapezoid
            cout << "Calculating area of trapezoid\n";
            double base1, base2, height, area;
            cout << "Enter the length of base1: ";
            cin >> base1;
            cout << "Enter the length of base2: ";
            cin >> base2;
            cout << "Enter the height: ";
            cin >> height;
            area = 0.5 * (base1 + base2) * height;
            cout << "Your trapezoid area is: " << area << endl;
            break;
        }
        case 3: { // Circle
            cout << "Calculating area of circle\n";
            double radius, area;
            cout << "Enter the radius: ";
            cin >> radius;
            area = M_PI * pow(radius, 2); // M_PI is a constant for pi, pow() is used for exponentiation
            cout << "Your circle area is: " << area << endl;
            break;
        }
        case 4: { // Sector
            cout << "Calculating area of sector\n";
            double radius, angle, area;
            cout << "Enter the radius: ";
            cin >> radius;
            cout << "Enter the angle (in degrees): ";
            cin >> angle;
            area = 0.5 * pow(radius, 2) * (angle * M_PI / 180); // Convert angle from degrees to radians
            cout << "Your sector area is: " << area << endl;
            break;
        }
        case 5: { // Ellipse
            cout << "Calculating area of ellipse\n";
            double major_axis, minor_axis, area;
            cout << "Enter the length of major axis: ";
            cin >> major_axis;
            cout << "Enter the length of minor axis: ";
            cin >> minor_axis;
            area = M_PI * major_axis * minor_axis;
            cout << "Your ellipse area is: " << area << endl;
            break;
        }
        case 6: { // Triangle
            cout << "Calculating area of triangle\n";
            double base, height, area;
            cout << "Enter the base: ";
            cin >> base;
            cout << "Enter the height: ";
            cin >> height;
            area = 0.5 * base * height;
            cout << "Your triangle area is: " << area << endl;
            break;
        }
        case 7: { // Parallelogram
            cout << "Calculating area of parallelogram\n";
            double base, height, area;
            cout << "Enter the base: ";
            cin >> base;
            cout << "Enter the height: ";
            cin >> height;
            area = base * height;
            cout << "Your parallelogram area is: " << area << endl;
            break;
        }
        case 8: { // Regular Polygon
            cout << "Calculating area of regular polygon\n";
            int num_sides;
            double side_length, apothem, area;
            cout << "Enter the number of sides: ";
            cin >> num_sides;
            cout << "Enter the length of each side: ";
            cin >> side_length;
            cout << "Enter the apothem (distance from center to midpoint of any side): ";
            cin >> apothem;
            area = 0.5 * num_sides * side_length * apothem;
            cout << "Your regular polygon area is: " << area << endl;
            break;
        }
        default:
            cout << "Invalid choice!\n";
    }

    return 0;
}
