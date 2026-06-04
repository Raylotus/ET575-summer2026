/*
Maksym Fursin
June 3, 2026
lab 8: Getting Help from AI to Build a Temperature Converter
*/
#include <iostream>
#include <iomanip>

using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (1.8 * celsius) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32) * (5.0 / 9.0) + 273.15;
}

int main() {
    int choice;
    double temperature;

    cout << "Temperature Conversion Program\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "3. Celsius to Kelvin\n";
    cout << "4. Fahrenheit to Kelvin\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "Enter temperature: ";
    cin >> temperature;

    cout << fixed << setprecision(1);

    if (choice == 1) {
        cout << temperature << "°C is "
             << celsiusToFahrenheit(temperature)
             << "°F" << endl;
    }
    else if (choice == 2) {
        cout << temperature << "°F is "
             << fahrenheitToCelsius(temperature)
             << "°C" << endl;
    }
    else if (choice == 3) {
        cout << temperature << "°C is "
             << celsiusToKelvin(temperature)
             << " K" << endl;
    }
    else if (choice == 4) {
        cout << temperature << "°F is "
             << fahrenheitToKelvin(temperature)
             << " K" << endl;
    }
    else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}

// --- AI Assistant Used: ChatGPT ---
// 1. Does the AI code use C++ concepts you're unfamiliar with? Explain.
//  - Yes it did, it used a function concept that we didn't cover yet, he used it because it was specified in prompt provided. It also used <iomanip> to format the output

// 2. Are there any issues or improvements you noticed? Explain.
//  - No issues, code is clean and strictly follows the prompt

// 3. What methods did you use to test if the AI code was working as it should? Explain.
//  - I tried to figure out the logic behind the code, asked a few questions that interested me like "what is #include <iomanip> ?", and compared the program's output with the example

