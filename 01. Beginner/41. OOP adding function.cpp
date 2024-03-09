#include <iostream>
using namespace std;

class Students {
public:
    string name;
    int rollno;

        void display()
        {
            cout<< name << " " << rollno <<endl;
        }
};

int main() {
    Students Zahin, Alif;

    Zahin.name = "Zahin";
    Zahin.rollno = 101;
    Zahin.display();

    Alif.name = "Alif";
    Alif.rollno = 102;
    Alif.display();

    return 0;
}
