#include <iomanip>
#include <iostream>
using namespace std;

// Declare 2 functions to convert the currencies
double eurron(double x, double y) {
    return x * y;
}

double roneur(double x, double y) {
    return x / y;
}
int main() {
    // Declare the variables as double, rate is for 15.11.2022
    double ron, eur, rate;
    rate = 4.90;
    int userInput;

    // Using precision to limit the numbers after decimal point to 2

    cout << fixed << setprecision(2);

    // Welcome meniu with 2 choices, EUR - RON and RON - EUR

    cout << "Welcome to RON - EUR Converter\n\n";
    cout << "To exchange EUR to RON enter 1\n";
    cout << "To exchange RON to EUR enter 2\n";
    cout << "Please enter number: ";
    cin >> userInput;

    if (userInput == 1) {
        // User enters euro amount
        cout << "Please enter EUR amount: ";
        cin >> eur;
        // Call function to convert from euro to ron
        cout << eur << " Euro is " << eurron(eur, rate) << " Romanian Lei\n";
    } else if (userInput == 2) {
        // User enters ron amount
        cout << "Please enter RON amount: ";
        cin >> ron;
        // Call function to convert from ron to euro
        cout << ron << " Romanian Lei is " << roneur(ron, rate) << " Euro\n";
    } else {
        cout << "Other curencies are not supported.";
    }
    return 0;
}