// This program adds up the monthly cost of expenses and
// multiplies them by 12 to give you the total annual cost.

#include <iostream>
using namespace std;

int main() {
    // Variables
    float   loanPayment,
            insurance,
            gas,
            oil,
            tires,
            maintenance;

    // Prompts
    cout << "Enter the monthly cost for the following: " << endl;

    cout << "Loan Payment: ";
    cin >> loanPayment;
    cout << endl;

    cout << "Insurance: ";
    cin >> insurance;
    cout << endl;

    cout << "Gas: ";
    cin >> gas;
    cout << endl;

    cout << "Oil: ";
    cin >> oil;
    cout << endl;

    cout << "Tires: ";
    cin >> tires;
    cout << endl;

    cout << "Maintenance: ";
    cin >> maintenance;
    cout << endl;

    // Calculations
    cout << "Your annual cost for everything is $";
    cout << (loanPayment + insurance + gas + oil + tires + maintenance) * 12;

    return 0;
}