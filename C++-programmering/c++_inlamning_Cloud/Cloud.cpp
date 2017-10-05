#include <iostream>
#include <cstdlib>
#include "Cloud.hpp"
#include "Dashboard.hpp"
using namespace std;


// constructor
Cloud::Cloud() {

}

    Dashboard db;


void Cloud::connected_units() {

}

void Cloud::dashboard() {

}

void Cloud::print_menu() {
cout << endl;
cout << "Welcome to Nacka Cloud\n\n";
cout << "1) Display connected units." << endl;
cout << "2) Connect a new unit." << endl;
cout << "3) Remove a unit." << endl;
cout << "4) Display dashboard (for status)." << endl;
cout << "5) Exit." << endl ;
cout << endl;
}
 
int Cloud::goto_Choice(int choice) {

  switch(choice)
  {
    case 1: cout << "\n**Display connected units**";
    break;
    case 2: cout << "\n**Connect a new unit.**";
    break;
    case 3: cout << "\n**Remove a unit.**";
    break;
    case 4: cout << "\n**Display dashboard (for status)**";

    db.print_board();
    break;
    case 5: cout << "\n**Exit.**";
    break;
    default: cout << "Wrong choice";
    cout << endl;
  };

  return 0;

}


void Cloud::units() {


}

void connect_unit() {

}

void remove_unit(int id) {

}

