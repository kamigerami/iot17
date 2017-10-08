#ifndef UNIT_H
#define UNIT_H

#include <vector>
#include <string>
#include "Cloud.hpp"

using namespace std;

class Unit: public Cloud {
    public:
        Unit();
        void set_Unit_Name(string unitName);
        void init_Unit_Name();
        void unit_status();
        void identification();
        void reset();
        void status();
        void status(int new_status);
        vector<string> names;
        int setId();
};

#endif
