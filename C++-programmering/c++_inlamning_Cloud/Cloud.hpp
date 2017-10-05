#ifndef CLOUD_H
#define CLOUD_H

class Cloud {
public:
    Cloud();
    void connected_units();
    void dashboard();
    void print_menu();
    int goto_Choice(int choice);
    void units();
private:
    void connect_unit();
    void remove_unit(int id);

};


#endif
