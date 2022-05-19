// IT number
//name 

#include "Driver.h"
#include<iostream>
using namespace std;


Driver::Driver()
{
	DriverID = 0;
	DriverHours = 0.0;
}

Driver::Driver(int pDriverID, float pDriverHours)
{
	DriverID = pDriverID;
	DriverHours = pDriverHours;
}
void Driver::ViewStatus()
{

}
void Driver::checkTours()
{

}
Driver::~Driver()
{
	cout << "Tour deleted." << endl;
}
