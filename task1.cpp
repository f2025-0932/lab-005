#include <iostream>
using namespace std;

int main() {
    int seconds, days, hours, minutes;
    cout << "Enter seconds: ";
    cin >> seconds;

    if (seconds >= 86400) {
        days = seconds / 86400;
        cout << "Days: " << days << endl;
    } 
    else if (seconds >= 3600) {
        hours = seconds / 3600;
        cout << "Hours: " << hours << endl;
    } 
    else if (seconds >= 60) {
        minutes = seconds / 60;
        cout << "Minutes: " << minutes << endl;
    } 
    else {
        cout << "Seconds: " << seconds << endl;
    }

    return 0;
}



