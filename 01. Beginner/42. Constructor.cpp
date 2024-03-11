#include <iostream>
using namespace std;

class Students {
public:
    string name;
    int rollno;
    double marks;

    // Constructor to initialize roll number, marks, and name
    Students(int x, double y, string n) {
        rollno = x;  // Assign x to rollno
        marks = y;   // Assign y to marks
        name = n;    // Assign n to name
    }

    // Method to display student information
    void display() {
        cout << name << " " << rollno << " " << marks << endl;
    }
};

int main() {
    Students Zahin(10, 10.5, "Zahin"); // Pass name as an additional argument
    Zahin.display();  // Display Zahin's information

    Students Alif(20, 50.5, "Alif");  // Pass name as an additional argument
    Alif.display();   // Display Alif's information

    return 0;
}
