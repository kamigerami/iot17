#include <iostream>
#include <string>
#include "Cloud.hpp"
#include "Unit.hpp"
using namespace std;


int main() {

Cloud cloud;
Unit unit;

int choice = 0;
   // initialize units
   unit.init_Unit_Name();
   unit.init_Unit_ID();

  cout << "Welcome to Nacka Cloud\n";
  while(true) {
      cloud.print_menu();
      cin >> choice;
      cloud.goto_Choice(choice);
      cout << endl;

      if (choice == 5) {
          break;
      } 
      else { 
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');; 

      } 
  } 

return 0;

}
