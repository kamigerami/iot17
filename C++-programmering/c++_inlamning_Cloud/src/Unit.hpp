#ifndef UNIT_HPP
#define UNIT_HPP
#include <vector>
#include <string>
using namespace std;

class Unit {
    public:
        Unit();
        void init_Unit_Name();
        void init_Unit_Info();
        void init_Unit_Status();
        void init_Unit_ID();
        void set_Unit_Name();
        void reset();
        void setId();
        void print_Connected_Units();
        string unitName;
        string unitInfo;
        string unitStatus;
        int numID;
        int value;
};

extern vector<string> vUnitNames;
extern vector<string> vUnitInfo;
extern vector<string> vUnitStatus;
extern vector<int> vNumID;

#endif
