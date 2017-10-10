#ifndef UNIT_HPP
#define UNIT_HPP
#include <vector>
#include <string>
using namespace std;

class Unit {
    public:
        Unit();
        void set_Unit_Name();
        void reset();
        void setId();
        void print_Connected_Units();
        string unitName;
        string unitInfo;
private:
        int numID;
        int value;
};

extern vector<string> vUnitNames;
extern vector<string> vUnitInfo;
extern vector<string> vUnitStatus;
extern vector<int> vNumID;

#endif
