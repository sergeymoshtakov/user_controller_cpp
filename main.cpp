#include <iostream>
#include <string>
#include <fstream>
#include "data_controller.h"
using namespace std;

int main() {
    string fname, lname;
    int day, month, year;
    cout << "Enter your first name: ";
    cin >> fname;
    cout << "Enter your last name: ";
    cin >> lname;
    cout << "Enter your birth day: ";
    cin >> day;
    cout << "Enter your birth month: ";
    cin >> month;
    cout << "Enter your birth year: ";
    cin >> year;
    data_controller dc;
    dc.add_user(fname, lname, day, month, year);
    dc.print();
    dc.save();
    return 0;
}