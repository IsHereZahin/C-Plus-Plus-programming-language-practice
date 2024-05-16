#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Student {
    string name;
    int rollNumber;
    float marks;
};

void displayMenu() {
    cout << "\n===== Student Record Management System =====" << endl;
    cout << "1. Add Student Record" << endl;
    cout << "2. Display All Student Records" << endl;
    cout << "3. Search Student by Name" << endl;
    cout << "4. Delete Student Record" << endl;
    cout << "5. Exit" << endl;
    cout << "============================================" << endl;
    cout << "Enter your choice: ";
}

int main() {
    vector<Student> studentRecords;
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch(choice) {
            case 1: {
                Student newStudent;
                cout << "Enter student name: ";
                cin.ignore();
                getline(cin, newStudent.name);
                cout << "Enter roll number: ";
                cin >> newStudent.rollNumber;
                cout << "Enter marks: ";
                cin >> newStudent.marks;
                studentRecords.push_back(newStudent);
                cout << "Student record added successfully!" << endl;
                break;
            }
            case 2: {
                if (studentRecords.empty()) {
                    cout << "No student records found!" << endl;
                } else {
                    cout << "===== Student Records =====" << endl;
                    for (const auto& student : studentRecords) {
                        cout << "Name: " << student.name << ", Roll Number: " << student.rollNumber << ", Marks: " << student.marks << endl;
                    }
                    cout << "===========================" << endl;
                }
                break;
            }
            case 3: {
                if (studentRecords.empty()) {
                    cout << "No student records found!" << endl;
                } else {
                    string searchName;
                    cout << "Enter student name to search: ";
                    cin.ignore();
                    getline(cin, searchName);
                    bool found = false;
                    for (const auto& student : studentRecords) {
                        if (student.name == searchName) {
                            cout << "Student found - Name: " << student.name << ", Roll Number: " << student.rollNumber << ", Marks: " << student.marks << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        cout << "Student with name \"" << searchName << "\" not found!" << endl;
                    }
                }
                break;
            }
            case 4: {
                if (studentRecords.empty()) {
                    cout << "No student records found!" << endl;
                } else {
                    string deleteName;
                    cout << "Enter student name to delete: ";
                    cin.ignore();
                    getline(cin, deleteName);
                    auto it = find_if(studentRecords.begin(), studentRecords.end(), [deleteName](const Student& student) {
                        return student.name == deleteName;
                    });
                    if (it != studentRecords.end()) {
                        studentRecords.erase(it);
                        cout << "Student record deleted successfully!" << endl;
                    } else {
                        cout << "Student with name \"" << deleteName << "\" not found!" << endl;
                    }
                }
                break;
            }
            case 5:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please enter a number between 1 and 5." << endl;
                break;
        }

    } while (choice != 5);

    return 0;
}
