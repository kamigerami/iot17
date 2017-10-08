/*
 * Unit - basklass f¨or alla typer av enheter som kan anslutas till molnet, dvs
 * en instans av Cloud
 * 
 */
#include <algorithm>
#include <string>
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include "Unit.hpp"
using namespace std;

Unit::Unit() {

}

void Unit::unit_status() {
}

void Unit::identification() {

}


void Unit::reset() {


}

void Unit::status() {


}

void Unit::status(int new_status) {

}

void Unit::init_Unit_Name() {
    Unit::vUnitNames = { "Sensor", "Kylare", "Tryck" };
}

void Unit::init_Unit_ID() {
   Unit::vNumID = { 10, 20, 30 };
}
void Unit::init_Unit_Status() {
   Unit::vUnitStatus = { 0, 0, 0 };
}
void Unit::init_Unit_Info() {
   Unit::vUnitInfo = { "Temp.sensor", "Kylare [serverhall]", "Trycksensor" };
}



void Unit::set_Unit_Name() {

    cin.ignore();
    cout << endl;
    cout << "Unit Name: \n" << endl;
    getline(cin, Unit::unitName, '\n');
    
    cout << endl;

    cout << "Unit Status: 0 (on) / 1 (off) \n" << endl;
    cin >> Unit::unitStatus;
    
    cout << endl;
    // mixing cin and getline so
    // discard chars until 
    // newline is found
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    
    cout << "Unit Information: \n" << endl;
    getline(cin, Unit::unitInfo, '\n');
    cout << endl;

    // insert values to the end of the vectors
    Unit::vUnitNames.push_back(Unit::unitName);
    Unit::vUnitStatus.push_back(Unit::unitStatus);
    Unit::vUnitInfo.push_back(Unit::unitInfo);
    Unit::setId();

}
void Unit::setId() {

srand( time(NULL) );
Unit::numID = 0;

// create random id in range 1-100
Unit::numID = rand() % 100 + 1;
Unit::vNumID.push_back(Unit::numID);

       // look for numID inside vector
    if ( find(vNumID.begin(), vNumID.end(), Unit::numID) != vNumID.end() ) {
       // if it already is in the vector
       // create a new random ID
       Unit::numID = rand() % 100 + 1;
   }
}


