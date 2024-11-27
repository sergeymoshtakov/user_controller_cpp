#include <iostream>
#include "date.h"
using namespace std;

class user {
    private:
        string first_name;
        string last_name;
        date age;
    public:
        user();
        user(string first_name, string last_name, int day, int month, int year);
        string print();
};