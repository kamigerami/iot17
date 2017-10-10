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
	vector<string> vUnitNames = { "Sensor", "Kylare", "Tryck" };
	vector<string> vUnitInfo = { "Temp.sensor", "Kylare [serverhall]", "Trycksensor" };
	vector<string> vUnitStatus = { "Off", "Off", "Off" };
	vector<int> vNumID = { 10, 20, 30 };
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

