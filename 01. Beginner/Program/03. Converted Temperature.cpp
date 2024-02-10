#include <iostream>

using namespace std;

int main() {
    int choice;
    double temperature, convertedTemperature;

    cout << "Temperature Conversion Menu:" << endl;
    cout << "1. Fahrenheit to Celsius" << endl;
    cout << "2. Celsius to Fahrenheit" << endl;
    cout << "3. Fahrenheit to Kelvin" << endl;
    cout << "4. Celsius to Kelvin" << endl;
    cout << "5. Kelvin to Celsius" << endl;
    cout << "6. Kelvin to Fahrenheit" << endl;
    cout << "Enter your choice (1-6): ";
    cin >> choice;

    cout << "Enter temperature: ";
    cin >> temperature;

    switch(choice) {
        case 1:
            convertedTemperature = (temperature - 32) * 5 / 9;
            cout << "Temperature in Celsius: " << convertedTemperature << endl;
            break;
        case 2:
            convertedTemperature = (temperature * 9 / 5) + 32;
            cout << "Temperature in Fahrenheit: " << convertedTemperature << endl;
            break;
        case 3:
            convertedTemperature = (temperature - 32) * 5 / 9 + 273.15;
            cout << "Temperature in Kelvin: " << convertedTemperature << endl;
            break;
        case 4:
            convertedTemperature = temperature + 273.15;
            cout << "Temperature in Kelvin: " << convertedTemperature << endl;
            break;
        case 5:
            convertedTemperature = temperature - 273.15;
            cout << "Temperature in Celsius: " << convertedTemperature << endl;
            break;
        case 6:
            convertedTemperature = (temperature - 273.15) * 9 / 5 + 32;
            cout << "Temperature in Fahrenheit: " << convertedTemperature << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
