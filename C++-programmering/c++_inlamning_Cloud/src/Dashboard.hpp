#ifndef DASHBOARD_H
#define DASHBOARD_H
#include <string>
using namespace std;



class Dashboard {
public:
    Dashboard();
    //Cloud::connected_units();
    string title;
    void print_board();
    int take_input(int input);
    void print_controls();
    void print_instruments();
//    void send_input(Unit id, string status);
};

#endif
