#include <iostream>
#include <string>
#include <fstream>
#include "data_controller.h"
using namespace std;

data_controller::data_controller(){
    users = new user[0];
    size = 0;
}
void data_controller::add_user(string first_name, string last_name, int day, int month, int year){
    user* temp = new user[size + 1];
    for(int i = 0; i < size; i++){
        temp[i] = users[i];
    }
    temp[size] = user(first_name, last_name, day, month, year);
    delete[] users;
    users = temp;
    size++;
}
void data_controller::print(){
    for(int i = 0; i < size; i++){
        cout << users[i].print() << endl;
    }
}
void data_controller::save(){
    ofstream out;
    out.open("users.txt");
    if (out.is_open())
    {
        for(int i = 0; i < size; i++){
            out << users[i].print() << endl;
        }
    }
    out.close(); 
}