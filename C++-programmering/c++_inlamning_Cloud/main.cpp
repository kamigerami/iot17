#include <iostream>
#include <string>
#include "Cloud.hpp"
using namespace std;


int main() {

Cloud Cloud;


int choice = 0;


do
{
  Cloud.print_menu();
  cin >> choice;
  cout << endl;

  Cloud.goto_Choice(choice);
} while (choice != 5);


return 0;

}
