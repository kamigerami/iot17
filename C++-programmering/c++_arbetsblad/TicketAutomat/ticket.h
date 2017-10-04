#ifndef TICKET_H
#define TICKET_H


class Ticket {
public:
    void printTicket();
    void addMoney(int money);
    // constructor
    Ticket();
    // destructor
    ~Ticket();
private:
    int saldo;
};

#endif
