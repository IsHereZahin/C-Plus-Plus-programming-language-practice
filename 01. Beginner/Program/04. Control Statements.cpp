#include <iostream>
using namespace std;

int main() {
    // Display menu
    cout << "Welcome to the vending machine!" << endl;
    cout << "Menu:" << endl;
    cout << "1. Coke - $1.50" << endl;
    cout << "2. Chips - $1.25" << endl;
    cout << "3. Water - $1.00" << endl;

    // User input
    int choice;
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;

    // Switch statement to handle user choice
    switch(choice) {
        case 1:
            cout << "You chose Coke." << endl;
            cout << "Please insert $1.50." << endl;
            break;
        case 2:
            cout << "You chose Chips." << endl;
            cout << "Please insert $1.25." << endl;
            break;
        case 3:
            cout << "You chose Water." << endl;
            cout << "Please insert $1.00." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 1; // Exit program due to invalid choice
    }

    // User payment simulation
    float amountPaid;
    cout << "Enter the amount you're inserting: $";
    cin >> amountPaid;

    // If-else statement to check if the amount is sufficient
    float price;
    switch(choice) {
        case 1:
            price = 1.50;
            break;
        case 2:
            price = 1.25;
            break;
        case 3:
            price = 1.00;
            break;
    }
    if (amountPaid >= price) {
        cout << "Thank you for your purchase!" << endl;
        cout << "Your change is: $" << amountPaid - price << endl;
    } else {
        cout << "Insufficient amount. Please insert more money." << endl;
    }

    // While loop for simulating vending machine operation until the user exits
    char choiceToContinue;
    do {
        cout << "Do you want to make another purchase? (Y/N): ";
        cin >> choiceToContinue;
        if (choiceToContinue == 'Y' || choiceToContinue == 'y') {
            // Display menu again
            cout << "Menu:" << endl;
            cout << "1. Coke - $1.50" << endl;
            cout << "2. Chips - $1.25" << endl;
            cout << "3. Water - $1.00" << endl;

            // User input
            cout << "Enter your choice (1, 2, or 3): ";
            cin >> choice;

            // Switch statement to handle user choice
            switch(choice) {
                case 1:
                    cout << "You chose Coke." << endl;
                    cout << "Please insert $1.50." << endl;
                    break;
                case 2:
                    cout << "You chose Chips." << endl;
                    cout << "Please insert $1.25." << endl;
                    break;
                case 3:
                    cout << "You chose Water." << endl;
                    cout << "Please insert $1.00." << endl;
                    break;
                default:
                    cout << "Invalid choice!" << endl;
                    return 1; // Exit program due to invalid choice
            }

            // User payment simulation
            cout << "Enter the amount you're inserting: $";
            cin >> amountPaid;

            // If-else statement to check if the amount is sufficient
            switch(choice) {
                case 1:
                    price = 1.50;
                    break;
                case 2:
                    price = 1.25;
                    break;
                case 3:
                    price = 1.00;
                    break;
            }
            if (amountPaid >= price) {
                cout << "Thank you for your purchase!" << endl;
                cout << "Your change is: $" << amountPaid - price << endl;
            } else {
                cout << "Insufficient amount. Please insert more money." << endl;
            }
        }
    } while (choiceToContinue == 'Y' || choiceToContinue == 'y');

    cout << "Goodbye! Have a great day!" << endl;

    return 0;
}
