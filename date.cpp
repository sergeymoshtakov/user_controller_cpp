#include <iostream>
#include "date.h"
using namespace std;

date::date(){
    day = 0;
    month = 0;
    year = 0;
}
date::date(int day, int month, int year){
    this->day = day;
    this->month = month;
    this->year = year;
}
string date::print(){
    return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
}