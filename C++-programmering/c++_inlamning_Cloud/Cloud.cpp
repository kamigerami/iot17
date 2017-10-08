/*
 * Cloud - huvudklass f¨or att h˚alla reda p˚a antal enheter som ¨ar anslutna,
 * hantera menyutskrifter och input fr˚an anv¨andaren
 * 
 */
#include <iostream>
#include <cstdlib>
#include "Cloud.hpp"
#include "Unit.hpp"
#include "Dashboard.hpp"
using namespace std;


// constructor
Cloud::Cloud() {

}

    Dashboard db;
    Unit unit;

void Cloud::connected_units() {

    unit.printUnits();
}

void Cloud::dashboard() {

}

void Cloud::print_menu() {
cout << endl;
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
            unit.printUnits();
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
    break;
    cout << endl;
  };
    return 0;

}

void Cloud::printUnits() {
   unit.init_Unit_Name();
   cout << "\nUnit\t Id\t Status\t Info\n" << endl;
   cout << unit.names.size() << endl;
   for (int i = 0; i < unit.names.size(); i++) {
       cout << unit.names[i] << "\t " << unit.setId() << endl;
   cout << "\t " << "off\t" << "some info\n" << endl;
   }
}

void connect_unit() {

}

void remove_unit(int id) {

}

