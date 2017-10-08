#include <iostream>
#include <string>
#include "Cloud.hpp"
using namespace std;


int main() {

Cloud cloud;


int choice = 0;


  cout << "Welcome to Nacka Cloud\n\n";
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
