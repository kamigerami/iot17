#ifndef MENU_HPP
#define MENU_HPP

class Menu {
public:
	Menu();
	// dashboard
	void dashboard_menu();
	int dashboard_goto_Choice(int choice);
	// cloud
	void cloud_menu();
	int cloud_goto_Choice(int choice);
};

#endif
