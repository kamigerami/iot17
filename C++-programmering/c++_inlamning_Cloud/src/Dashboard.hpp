#ifndef DASHBOARD_H
#define DASHBOARD_H
#include <string>
using namespace std;

class Dashboard {
public:
    Dashboard();
    int dashboard_goto_Choice(int choice);
    void change_status();
    void print_units();
    void remove_unit();
private:
    string unitStatus;
    int numID;

};

#endif
