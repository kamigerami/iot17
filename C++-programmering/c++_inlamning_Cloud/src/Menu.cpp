#include <iomanip>
#include <cstdlib>
#include <string>
#include <iostream>
#include "Menu.hpp"
#include "Dashboard.hpp"
#include "Cloud.hpp"
#include "Unit.hpp"
using namespace std;

Dashboard Dashboard;
Cloud Cloud;
Unit Unit;

Cloud::Cloud() {
}

Menu::Menu() {

}
// Initialize Unit vectors

vector<string> vUnitNames = { "Sensor", "Kylare", "Tryck" };
vector<string> vUnitInfo = { "Temp.sensor", "Kylare [serverhall]", "Trycksensor" };
vector<string> vUnitStatus = { "Off", "Off", "Off" };
vector<int> vNumID = { 10, 20, 30 };



// Dashboard


int Menu::dashboard_goto_Choice(int choice) {
  switch(choice)
  {
    case 1:
    	cout << "\n** Change status of a unit **\n";
    	Dashboard.change_status();
    break;
    case 2:
    	cout << "\n** Display status of all units**\n";
    Dashboard.print_units();
    break;
    case 3:
    	cout << "\n** Back to main menu.**\n";
    break;
    default:
    	cout << "Wrong choice";
    break;
    cout << endl;
  };

    return 0;

}

void Menu::dashboard_menu() {

	int choice = 0;
	  while (true) {
	    cout << endl;
	    cout << "Welcome to the dashboard\n\n";
	    cout << endl;
	    cout << "1) Change status of a unit" << endl;
	    cout << "2) Display status of all units" << endl;
	    cout << "3) Back to main menu." << endl ;
	    cout << endl;
	    cin >> choice;
	    dashboard_goto_Choice(choice);
	    cout << endl;
	    if (choice == 3) {
	        break;
	    } else {
	        cin.clear();
	        cin.ignore(numeric_limits<streamsize>::max(), '\n');;
	   }

	  }
}




// Cloud

int Menu::cloud_goto_Choice(int choice) {

  switch(choice)
  {
    case 1:
    	cout << "\n** Connected units **\n";
    Cloud.print_Connected_Units();
    break;
    case 2:
    	cout << "\n** Add a new unit **\n";
    Unit.set_Unit_Name();
    break;
    case 3:
    	cout << "\n** Remove a unit **\n";
    	Dashboard.remove_unit();
    break;
    case 4:
    	cout << "\n** Dashboard **\n";
    dashboard_menu();
    break;
    case 5:
    	cout << "\n**Exit.**\n";
    break;
    default:
    	cout << "Wrong choice";
    break;
    cout << endl;
  };
    return 0;

}


void Menu::cloud_menu() {
	cout << endl;
	cout << "1) Display connected units (status On)." << endl;
	cout << "2) Add a new unit." << endl;
	cout << "3) Remove a unit." << endl;
	cout << "4) Dashboard (Modify status of units)." << endl;
	cout << "5) Exit." << endl ;
	cout << endl;

}
