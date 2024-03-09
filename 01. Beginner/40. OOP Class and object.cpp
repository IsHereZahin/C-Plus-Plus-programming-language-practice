#include <iostream>
using namespace std;

class Students {
public:
    string name;
    int rollno;
};

int main() {
    Students Zahin, Alif;

    Zahin.name = "Zahin";
    Zahin.rollno = 101;

    Alif.name = "Alif";
    Alif.rollno = 102;

    cout << Zahin.name << " " << Zahin.rollno << endl;
    cout << Alif.name << " " << Alif.rollno << endl;
    return 0;
}
