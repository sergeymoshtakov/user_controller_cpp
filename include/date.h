#include <iostream>
using namespace std;

class date {
    private:
        int day;
        int month;
        int year;
    public:
        date();
        date(int day, int month, int year);
        string print();
};