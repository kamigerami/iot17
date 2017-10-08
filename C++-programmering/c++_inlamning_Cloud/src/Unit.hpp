#ifndef UNIT_H
#define UNIT_H

#include <vector>
#include <string>
#include "Cloud.hpp"

using namespace std;

class Unit: public Cloud {
    public:
        Unit();
        void set_Unit_Name();
        void init_Unit_Name();
        void init_Unit_ID();
        void init_Unit_Status();
        void init_Unit_Info();
        void unit_status();
        void identification();
        void reset();
        void status();
        void status(int new_status);
        void setId();
        vector<string> vUnitNames;
        vector<string> vUnitInfo;
        vector<int> vUnitStatus;
        vector<int> vNumID;
        string unitName;
        string unitInfo;
        int unitStatus;
        int numID;

    private:
};

#endif
