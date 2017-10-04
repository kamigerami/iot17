#include <iostream>
#include "ticket.h"
using namespace std;


void Ticket::printTicket() {
  cout << "printing ticket ...\n";
  cout << "Your saldo is: " << saldo << " kr" << endl;

}

void Ticket::addMoney(int money) {
    saldo += money;
}
