/*
 * Unit - basklass f¨or alla typer av enheter som kan anslutas till molnet, dvs
 * en instans av Cloud
 * 
 */
#include <string>
#include <iostream>
#include <cstdlib>
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
    Unit::names = { "Sensor", "Kylare", "Tryck" };

}

void Unit::set_Unit_Name(string unitName) {
    Unit::names.push_back(unitName);

}
int Unit::setId() {
srand( time(NULL) );
int num = rand() % 100;
    return num;



}


