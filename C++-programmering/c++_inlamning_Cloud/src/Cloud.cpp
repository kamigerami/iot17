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
using namespace std;




void Cloud::print_Connected_Units() {

	// set to On
	unitStatus = "On";
    // if any are set to "On" then loop through and get all indexes that matches "On" status
     if ( find(vUnitStatus.begin(), vUnitStatus.end(), unitStatus) != vUnitStatus.end() ) {

    		// iterate through vector Status and find all occurences of unitStatus
    		// and save their index positions to result vector

    		std::vector<std::size_t> result ;

    		for( size_t i = 0; i < vUnitStatus.size(); ++i) {
    			if (vUnitStatus[i] == unitStatus) {
    				result.push_back(i);
    			}
    		}
    		// Print Unit menu header
    	 	 cout << setw(25) << left <<
    	       "\nUnit" <<
    	       setw(5) << left <<
    	       " Id" <<
    	       setw(10) << left <<
    	       " Status" <<
    	       setw(35) << left <<
    	       " Info" << endl;

    	 	 // Print each 'On' unit
    	 	 for (int i = 0; i < result.size(); i++) {

    	 		 	 cout << setw(25) << left <<
    	 		 	// name
    	 		 	vUnitNames[result[i]] <<
				setw(5) << left <<
				// id
				vNumID[result[i]] <<
				setw(10) << left <<
				// status
				vUnitStatus[result[i]] <<
				setw(35) <<  left <<
				// info
				vUnitInfo[result[i]] << endl;
    	 	 }
     } else {
    	 	 	 cout << "\n\nNo connected units... \nYour units are either offline or not available.\nPlease go to the dashboard and connect your units to the CLoud!" << endl;
     }
}


