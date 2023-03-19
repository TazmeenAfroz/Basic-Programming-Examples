#include <iostream>
#include <string>
using namespace std;

void displayChoices();
void getTimeInput(int& hours, int& minutes, string& meridiem, string& notation);
void displayResult(int hours, int minutes, string meridiem, string notation);
void convertTo12Hour(int& hours, string& meridiem);
void convertTo24Hour(int& hours, string meridiem);

int main() {
    while(1){
    int hours, minutes;
    string meridiem, notation;
    
    displayChoices();
   cin >> notation;

    
    if (notation == "1") {
        cout << "Enter the time in 24-hour notation:" << endl;
        getTimeInput(hours, minutes, meridiem, notation);
        convertTo12Hour(hours, meridiem);
        displayResult(hours, minutes, meridiem, notation);
    }
    else if (notation == "2") {
        cout << "Enter the time in 12-hour notation:" << endl;
        getTimeInput(hours, minutes, meridiem, notation);
        convertTo24Hour(hours, meridiem);
        displayResult(hours, minutes, meridiem, notation);
    }
    else {
        break;
    }
    }
    return 0;
}

void displayChoices() {
    cout << "Enter 1 to convert time from 24-hour notation to 12-hour notation." << endl;
    cout << "Enter 2 to convert time from 12-hour notation to 24-hour notation." << endl;
    cout<<"Enter any other key to exit "<<endl;
}

void getTimeInput(int& hours, int& minutes, string& meridiem, string& notation) {
    cout << "Enter the hours (0-23 for 24-hour notation, 1-12 for 12-hour notation): ";
    cin >> hours;
    
    if (notation == "1" && (hours < 0 || hours > 23)) {
        cout << "Invalid hours. Please run the program again." << endl;
        exit(0);
    }
    else if (notation == "2" && (hours < 1 || hours > 12)) {
        cout << "Invalid hours. Please run the program again." << endl;
        exit(0);
    }
    
    cout << "Enter the minutes (0-59): ";
    cin >> minutes;
    
    if (minutes < 0 || minutes > 59) {
        cout << "Invalid minutes. Please run the program again." << endl;
        exit(0);
    }
    
    if (notation == "2") {
        cout << "Enter AM or PM: ";
        cin >> meridiem;
        if (meridiem != "AM" && meridiem != "PM") {
            cout << "Invalid meridiem. Please run the program again." << endl;
            exit(0);
        }
    }
}

void displayResult(int hours, int minutes, string meridiem, string notation) {
    cout << "The time in ";
    if (notation == "1") {
        cout << "12-hour notation: ";
        if (hours == 0) {
            cout << "12:" << minutes << " AM" << endl;
        }
        else if (hours == 12) {
            cout << "12:" << minutes << " PM" << endl;
        }
        else if (hours > 12) {
            cout << hours-12 << ":" << minutes << " PM" << endl;
        }
        else {
            cout << hours << ":" << minutes << " PM" << endl;
}
}
else {
cout << "24-hour notation: ";
if (hours < 10) {
cout << "0" << hours;
}
else {
cout << hours;
}
cout << ":";
if (minutes < 10) {
cout << "0" << minutes;
}
else {
cout << minutes;
}
cout << endl;
}
}

void convertTo12Hour(int& hours, string& meridiem) {
if (hours == 0) {
hours = 12;
meridiem = "AM";
}
else if (hours == 12) {
meridiem = "PM";
}
else if (hours > 12) {
hours = hours - 12;
meridiem = "PM";
}
else {
meridiem = "AM";
}
}

void convertTo24Hour(int& hours, string meridiem) {
if (meridiem == "AM" && hours == 12) {
hours = 0;
}
else if (meridiem == "PM" && hours != 12) {
hours = hours + 12;
}
}