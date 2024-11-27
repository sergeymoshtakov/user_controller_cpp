#include <iostream>
#include <string>
#include <fstream>
#include "user.h"
using namespace std;

class data_controller {
    private:
        user* users;
        int size;
    public:
        data_controller();
        void add_user(string first_name, string last_name, int day, int month, int year);
        void print();
        void save();
        void load();
};