/*
 * Dashboard - tillhandah˚aller funktionalitet f¨or att mata in kommandon och
 * ¨andra p˚a anslutna enheters status (VG-niv˚a)
 */
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <string>
#include <iostream>
#include "Dashboard.hpp"
#include "Unit.hpp"
#include "Menu.hpp"
using namespace std;


Unit unit;
Menu menu;

// constructors
Dashboard::Dashboard() {
	numID = 0;
};

Unit::Unit() {
	value = 0;
	numID = 0;
};


void Dashboard::remove_unit() {

	if (vUnitNames.empty() ) {
	 	 cout << "\n\nThere are no units available.\nCan't remove units.\nPlease go to the Cloud (main menu) and add a new unit! " << endl;
	 	 return;
	}
	 // we will get an input from the user
	 // for the ID that we want to remove
	 // then remove the element from all of the vectors
	 // and shrink_to_fit the vector again
	 cout << endl;
	 cout << "Remove Unit (any unit - even disconnected): \n" << endl;
	 cout << endl;
	 print_units();
	 cout << endl;

	 cout << "Which Unit [ID] do you want to remove ?" << endl;
	 cin >> numID;
	 // check if the input exists in the vector vNumID
	 if ( find(vNumID.begin(), vNumID.end(), numID) == vNumID.end() ) {
		 cout << "ID " << numID << " " << "Don't exist... exiting" << endl;
		 //menu.cloud_menu();
	 } else {
		// find ID -> change value inside vector
		// get position
		ptrdiff_t pos = distance(vNumID.begin(), find(vNumID.begin(), vNumID.end(), numID));

		// print the unit that was picked
		cout << setw(25) << left <<
		"\nUnit" <<
		setw(5) << left <<
		" Id" <<
		setw(10) << left <<
		" Status" <<
		setw(35) << left <<
		" Info" << endl;

		cout << setw(25) << left <<
		// name
		vUnitNames[pos] <<
		setw(5) << left <<
		// id
		vNumID[pos] <<
		setw(10) << left <<
		// status
		vUnitStatus[pos] <<
		setw(35) <<  left <<
		// info
		vUnitInfo[pos] << endl;

		cout << endl;
		cout << endl;

		cin.ignore();

		cout << "Are you sure you want to remove this unit ? [Y]es / [N]o\n" << endl;

		// local string choice
		string choice = "";
		getline(cin, choice);

		if (choice == "Y" || choice == "y" || choice == "yes" || choice == "YES") {
			// erase elements from vector using the index position
			vUnitNames.erase(vUnitNames.begin() + pos);
			vUnitInfo.erase(vUnitInfo.begin() + pos);
			vUnitStatus.erase(vUnitStatus.begin() + pos);
			vNumID.erase(vNumID.begin() + pos);

			// resize vector to save space
			vector<string>(vUnitNames).swap(vUnitNames);
			vector<string>(vUnitInfo).swap(vUnitInfo);
			vector<string>(vUnitStatus).swap(vUnitStatus);
			vector<int>(vNumID).swap(vNumID);
		} else if (choice == "N" || choice == "n" || choice == "no" || choice == "NO") {
			cout << "Not doing any changes ... canceling removal of unit" << endl;
			menu.cloud_menu();
		} else {
			cout << endl;
			cout << "Wrong input...try again" << endl;
			cout << endl;
			remove_unit();
		} // nested if
	} // nested if
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
	    cin >> numID;
	    // check if the input exists in the vector vNumID
	    if ( find(vNumID.begin(), vNumID.end(), numID) == vNumID.end() ) {
	   	    	 	 cout << "ID " << numID << " " << "Don't exist... exiting" << endl;
	   	    	 	 menu.dashboard_menu();
	    } else {
	    		cout << endl;
	    		cout << "Set status for ID [" << numID << "] :"<< endl;
	    		cout << endl;
	    		cout << "1) On\n" << endl;
	    		cout << "2) Off\n" << endl;

	    		cin >> choice;

	    		if (choice == 1) {
	    			unitStatus = "On";
	    		} else {
	    			unitStatus = "Off";
	    		}

	    		// find ID -> change value inside vector
	    		if ( find(vNumID.begin(), vNumID.end(), numID) != vNumID.end() ) {
	    			// get position
	    			ptrdiff_t pos = distance(vNumID.begin(), find(vNumID.begin(), vNumID.end(), numID));

		    		// change value here
	    	        	vUnitStatus[pos] = unitStatus;
	    		}
	    }
}


void Dashboard::print_units() {
	if (! vUnitNames.empty() ) {

		cout << setw(25) << left <<
		"\nUnit" <<
		setw(5) << left <<
		" Id" <<
		setw(10) << left <<
		" Status" <<
		setw(35) << left <<
		" Info" << endl;


		for (int i = 0; i < vUnitNames.size(); i++) {

			cout << setw(25) << left <<
			// name
			vUnitNames[i] <<
			setw(5) << left <<
			// id
			vNumID[i] <<
			setw(10) << left <<
			// status
			vUnitStatus[i] <<
			setw(35) <<  left <<
			// info
			vUnitInfo[i] << endl;
		}
	} else {
	    	 	 	 cout << "\n\nThere are no units available.\nPlease go to the Cloud (main menu) and add a new unit! " << endl;
	     }
}

