#include <iostream>
#include "ticket.h"
using namespace std;

// constructor
Ticket::Ticket() {
    cout << "Object instantiated...\n" << endl;
    cout << "Adding 100 kr as default...\n" << endl;
    saldo = 100;
}

Ticket::~Ticket() {
    cout << "Running destructor ..\n" << endl;
}

void Ticket::printTicket() {
  cout << "printing ticket ...\n";
  cout << "Your saldo is: " << saldo << " kr" << endl;

}

void Ticket::addMoney(int money) {
    saldo += money;
}
