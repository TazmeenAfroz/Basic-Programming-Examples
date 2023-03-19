#include <iostream>
using namespace std;

// Function to get user input
void getData(char &maritalStatus, int &numChildren, double &grossSalary, double &pensionPercentage) {
    cout << "Enter your marital status (s for single, m for married): ";
    cin >> maritalStatus;
    if (maritalStatus == 'm') {
        cout << "Enter the number of children under the age of 14: ";
        cin >> numChildren;
    }
    cout << "Enter your gross salary: $";
    cin >> grossSalary;
    cout << "Enter the percentage of gross income contributed to a pension fund: ";
    cin >> pensionPercentage;
}

// Function to calculate tax amount
double taxAmount(char maritalStatus, int numChildren, double grossSalary, double pensionPercentage) {
    double taxableIncome, standardExemption, pensionContribution, taxAmount;
    if (maritalStatus == 's') {
        standardExemption = 4000;
    } else if (maritalStatus == 'm') {
        standardExemption = 7000 + (numChildren * 1000);
    }
    pensionContribution = (pensionPercentage / 100) * grossSalary;
    taxableIncome = grossSalary - standardExemption - pensionContribution;
    if (taxableIncome <= 15000) {
        taxAmount = taxableIncome * 0.15;
    } else if (taxableIncome > 15000 && taxableIncome <= 40000) {
        taxAmount = 2250 + ((taxableIncome - 15000) * 0.25);
    } else {
        taxAmount = 8460 + ((taxableIncome - 40000) * 0.35);
    }
    return taxAmount;
}

int main() {
    char maritalStatus;
    int numChildren = 0;
    double grossSalary, pensionPercentage, tax;

    getData(maritalStatus, numChildren, grossSalary, pensionPercentage);
    tax = taxAmount(maritalStatus, numChildren, grossSalary, pensionPercentage);

    cout << "The federal tax owed is: $" << tax << endl;

    return 0;
}
