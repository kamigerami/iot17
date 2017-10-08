/*
 * Cloud - huvudklass f¨or att h˚alla reda p˚a antal enheter som ¨ar anslutna,
 * hantera menyutskrifter och input fr˚an anv¨andaren
 * 
 */
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include "Cloud.hpp"
#include "Unit.hpp"
#include "Dashboard.hpp"
using namespace std;

Unit unit;
Dashboard db;


// constructor
Cloud::Cloud() {
    
   //  initalize vector if it's empty
   if (unit.vUnitNames.empty() || unit.vUnitInfo.empty() || unit.vUnitStatus.empty() || unit.vNumID.empty()) {
       
       unit.init_Unit_Name();
       unit.init_Unit_Info();
       unit.init_Unit_Status();
       unit.init_Unit_ID();
   }

}




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
    case 1: cout << "\n** Connected units **\n";
            unit.printUnits();
    break;
    case 2: cout << "\n** Connect a new unit **\n";
            unit.set_Unit_Name();
    break;
    case 3: cout << "\n** Remove a unit **\n";
    break;
    case 4: cout << "\n** Dashboard **\n";

    db.print_board();
    break;
    case 5: cout << "\n**Exit.**\n";
    break;
    default: cout << "Wrong choice";
    break;
    cout << endl;
  };
    return 0;

}

void Cloud::printUnits() {

     cout << setw(25) << left <<
      "\nUnit" << 
      setw(5) << left <<
      " Id" << 
      setw(10) << left <<
      " Status" << 
      setw(35) << left <<
      " Info" << endl;

   for (int i = 0; i < unit.vUnitNames.size(); i++) {

       cout << setw(25) << left <<
       // name
       unit.vUnitNames[i] << 
       setw(5) << left <<
       // id
       unit.vNumID[i] << 
       setw(10) << left <<
       // status
       unit.vUnitStatus[i] << 
       setw(35) <<  left <<
       // info
       unit.vUnitInfo[i] << endl;
   }
}

void connect_unit() {

}

void remove_unit(int id) {

}

