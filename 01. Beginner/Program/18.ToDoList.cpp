#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void displayMenu() {
    cout << "\n===== To-Do List Menu =====" << endl;
    cout << "1. Add Task" << endl;
    cout << "2. Remove Task" << endl;
    cout << "3. View Tasks" << endl;
    cout << "4. Exit" << endl;
    cout << "===========================" << endl;
    cout << "Enter your choice: ";
}

int main() {
    vector<string> tasks;
    int choice;
    string task;

    do {
        displayMenu();
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter task to add: ";
                cin.ignore();
                getline(cin, task);
                tasks.push_back(task);
                cout << "Task added successfully!" << endl;
                break;
            case 2:
                if (tasks.empty()) {
                    cout << "Task list is empty!" << endl;
                } else {
                    cout << "Enter index of task to remove (1-" << tasks.size() << "): ";
                    int index;
                    cin >> index;
                    if (index >= 1 && index <= tasks.size()) {
                        tasks.erase(tasks.begin() + index - 1);
                        cout << "Task removed successfully!" << endl;
                    } else {
                        cout << "Invalid index!" << endl;
                    }
                }
                break;
            case 3:
                if (tasks.empty()) {
                    cout << "Task list is empty!" << endl;
                } else {
                    cout << "===== Tasks =====" << endl;
                    for (int i = 0; i < tasks.size(); ++i) {
                        cout << i + 1 << ". " << tasks[i] << endl;
                    }
                    cout << "=================" << endl;
                }
                break;
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please enter a number between 1 and 4." << endl;
                break;
        }

    } while (choice != 4);

    return 0;
}
