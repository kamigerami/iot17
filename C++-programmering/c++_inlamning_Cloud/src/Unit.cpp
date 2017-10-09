/*
 * Unit - basklass f¨or alla typer av enheter som kan anslutas till molnet, dvs
 * en instans av Cloud
 * 
 */
#include <algorithm>
#include <string>
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include "Unit.hpp"
using namespace std;


void Unit::reset() {
    init_Unit_Name();
    init_Unit_Info();
    init_Unit_Status();
    init_Unit_ID();


}

void Unit::init_Unit_Name() {
    vUnitNames = { "Sensor", "Kylare", "Tryck" };
}

void Unit::init_Unit_Info() {
   vUnitInfo = { "Temp.sensor", "Kylare [serverhall]", "Trycksensor" };
}

void Unit::init_Unit_Status() {
   vUnitStatus = { "Off", "Off", "Off" };
}

void Unit::init_Unit_ID() {
   vNumID = { 10, 20, 30 };
}




void Unit::set_Unit_Name() {

    cin.ignore();
    cout << "ID is generated automatically\n" << endl;
    cout << "Each new unit has a default status of [Off]\n" << endl;
    cout << endl;
    cout << "Unit Name: \n" << endl;
    getline(cin, unitName, '\n');
    
    cout << endl;

    cout << "Unit Information: \n" << endl;
    getline(cin, unitInfo, '\n');
    cout << endl;

    // insert values to the end of the vectors
    vUnitNames.push_back(unitName);
    vUnitStatus.push_back("Off"); // default status to Off
    vUnitInfo.push_back(unitInfo);
    setId(); // will set a random ID

}
void Unit::setId() {

srand( time(NULL) );
numID = 0;

// create random id in range 1-100
numID = rand() % 100 + 1;
vNumID.push_back(numID);

       // look for numID inside vector
    if ( find(vNumID.begin(), vNumID.end(), numID) != vNumID.end() ) {
       // if it already is in the vector
       // create a new random ID
       numID = rand() % 100 + 1;
   }
}

void Unit::print_Connected_Units() {

	// set to On
	unitStatus = "On";
    // if any are set to "On" then print that particular unit
     if ( find(vUnitStatus.begin(), vUnitStatus.end(), unitStatus) != vUnitStatus.end() ) {

    	    ptrdiff_t pos = distance(vUnitStatus.begin(), find(vUnitStatus.begin(), vUnitStatus.end(), unitStatus));
        cout << "pos is" << pos << endl;

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
    	 	 	 cout << "\n\nNo connected units... \nYour units are either offline or not available.\nPlease go to the dashboard and connect your units to the CLoud!" << endl;
     }
}


