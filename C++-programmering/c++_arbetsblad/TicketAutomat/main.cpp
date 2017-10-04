#include <iostream>
#include "ticket.h"
using namespace std;

int main(int argc, const char * argv[]) {
    
    Ticket ticket;

    ticket.printTicket();
    
    cout << "Adding more money ... \n" << endl;

    ticket.addMoney(100);
    
    ticket.printTicket();

    cout << "Adding more money ... \n" << endl;

    ticket.addMoney(100);
    
    ticket.printTicket();

    return 0;

}
