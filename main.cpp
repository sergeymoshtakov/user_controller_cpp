#include <iostream>
#include <string>
#include <fstream>
#include "user.h"
using namespace std;

static void write_to_file(string data){
    ofstream out;
    out.open("users.txt");
    if (out.is_open())
    {
        out << data;
    }
    out.close(); 
}

static void read_from_file(){
    ifstream in;
    in.open("users.txt");
    if (in.is_open())
    {
        string line;
        while (getline(in, line))
        {
            cout << line << endl;
        }
    }
    in.close();
}

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
    user u(fname, lname, day, month, year);
    write_to_file(u.print());
    read_from_file();
    return 0;
}