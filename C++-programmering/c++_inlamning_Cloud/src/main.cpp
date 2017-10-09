#include <iostream>
#include <string>
#include "Menu.hpp"
using namespace std;



int main() {

Menu menu;

int choice = 0;

  cout << "Welcome to Nacka Cloud\n";
  while(true) {
      menu.cloud_menu();
      cin >> choice;
      menu.cloud_goto_Choice(choice);
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
