/*
 * Dashboard - tillhandah˚aller funktionalitet f¨or att mata in kommandon och
 * ¨andra p˚a anslutna enheters status (VG-niv˚a)
 */
#include <iomanip>
#include <cstdlib>
#include <string>
#include <iostream>
#include "Dashboard.hpp"
#include "Unit.hpp"
#include "Menu.hpp"
using namespace std;


Unit unit;
Menu menu;

// constructor
Dashboard::Dashboard() {

}

Unit::Unit() {
	   //  initalize vector if it's empty
	   if (vUnitNames.empty() || vUnitInfo.empty() || vUnitStatus.empty() || vNumID.empty()) {

	       init_Unit_Name();
	       init_Unit_Info();
	       init_Unit_Status();
	       init_Unit_ID();
	   }

}

void Dashboard::change_status() {

        // local vars
        int choice = 0;

	    cout << "Change Unit Status: \n" << endl;
	    cout << endl;
	    cout << "Changing status to [On] will connect this unit to the Cloud!" << endl;
	    cout << endl;
	    print_units();
	    cout << endl;

	    cout << "Which Unit [ID] do you want to change status of ?" << endl;
	    cin >> unit.numID;
	    // check if the input exists in the vector vNumID
	    if ( find(unit.vNumID.begin(), unit.vNumID.end(), unit.numID) == unit.vNumID.end() ) {
	   	    	 	 cout << "ID " << unit.numID << " " << "Don't exist... exiting" << endl;
	   	    	 	 menu.dashboard_menu();
	    } else {
	    		cout << endl;
	    		cout << "Set status for ID [" << unit.numID << "] :"<< endl;
	    		cout << endl;
	    		cout << "1) On\n" << endl;
	    		cout << "2) Off\n" << endl;

	    		cin >> choice;

	    		if (choice == 1) {
	    			unit.unitStatus = "On";
	    		} else {
	    			unit.unitStatus = "Off";
	    		}

	    		// find ID -> change value inside vector
	    		if ( find(unit.vNumID.begin(), unit.vNumID.end(), unit.numID) != unit.vNumID.end() ) {
	    			// get position
	    			ptrdiff_t pos = distance(unit.vNumID.begin(), find(unit.vNumID.begin(), unit.vNumID.end(), unit.numID));
	    	        	cout << "pos is " << pos << endl;
		    		// change value here
	    	        	unit.vUnitStatus[pos] = unit.unitStatus;
	    		}
	    }
}


void Dashboard::print_units() {
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

