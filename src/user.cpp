#include <iostream>
#include "../include/user.h"
using namespace std;

user::user(){
    first_name = "";
    last_name = "";
    age = date();
}
user::user(string first_name, string last_name, int day, int month, int year){
    this->first_name = first_name;
    this->last_name = last_name;
    this->age = date(day, month, year);
}
string user::print(){
    return first_name + " " + last_name + " " + age.print();
}