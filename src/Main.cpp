#include "Guest.h"
#include "Packages.h"
#include "Payment.h"
#include "Admin.h"
#include "Registered_User.h"
#include "Manager.h"
#include "Driver.h"
#include "Financial_Records.h"
#include <iostream>
using namespace std;

int main()
{
	//----------------------------------start Guest class------------------------------------------------------
	guest g1;
	string letter;

	cout << "Do you want register now (yes-Y or y/no-N or n).  : ";
	cin >> letter;
	cout << endl << endl;

	if (letter == "Y" || letter == "y")
	{
		g1.inputUserDetails();
		cout << endl << endl;
		g1.displayDetails();
	}
	else
	{
		cout << "Okay, Have a good day.";
	}
	//--------------------end Guest class----------------------------------------------------------------

	//----------------------------start Package class---------------------------------------------------

	Package p1, p2, p3, p4;

	p1.setPackageDetails(5001, 20000.00, 2, "Beach Package", "Meals , Flights , Accommodation , Transfer , Sightseeing ");

	p2.setPackageDetails(5002, 50000.00, 3, "Luxury Package", "Meals , Accommodation , Transfer , Sightseeing ");

	p3.setPackageDetails(5003, 80000.00, 5, "WildLife Package", "Meals , Flights , Accommodation , Sightseeing ");

	p4.setPackageDetails(5004, 30000.00, 2, "Family Package", " Flights, Accommodation, Transfer, Sightseeing");


	p1.DisplayPackageDetails();
	cout << "******************************************************************************************************" << endl;
	p2.DisplayPackageDetails();
	cout << "******************************************************************************************************" << endl;
	p3.DisplayPackageDetails();
	cout << "******************************************************************************************************" << endl;
	p4.DisplayPackageDetails();

	//----------------------------end Package class----------------------------------------------------------------------------
	
	//----------------------------start Payment class----------------------------------------------------------------------------
	
	int i, a, b;
	double total = 0.0;
	payment py1;
	cout << "Enter Package quantity :";
	cin >> i;

	for (a = 1; a <= i; a++)
	{
		py1.calculateTotalAmount() == 0.0;
		{
			py1.packageID() == b;
			if (b == 50001)
			{
				py1.calculateTotalAmount() == py1.calculateTotalAmount() + 20000;
				return py1.calculateTotalAmount();
			}
			else if (b == 50002)
			{
				py1.calculateTotalAmount() == py1.calculateTotalAmount() + 30000;
				return py1.calculateTotalAmount();
			}
			else if (b == 50003)
			{
				py1.calculateTotalAmount() == py1.calculateTotalAmount() + 50000;
				return py1.calculateTotalAmount();
			}
			else if (b == 50004)
			{
				py1.calculateTotalAmount() == py1.calculateTotalAmount() + 80000;
				return py1.calculateTotalAmount();
			}
			else
				break;
			total = total + py1.calculateTotalAmount();
		}
	}
	cout << "TOTAL AMOUNT OF BOOKING PACKAGE  : " << total << endl << endl;

	py1.newPayment();
	py1.Validate();
	 
	//----------------------------end Payment class----------------------------------------------------------------------------

	//----------------------------start Admin class----------------------------------------------------------------------------
	
	Admin* pkg1;
	string decision;
	string letter;
	int i = 1;
	while (i <= 200)
	{
		cout << "Do you want update the system (YES-Y/NO-N).   :  ";
		cin >> decision;

		if (decision == "Y")
		{
			pkg1 = new Admin();
			pkg1->AdminDetails();
			pkg1->inputPackage();
			pkg1->setUpdateDate();
			cout << "Updated date  :" << pkg1->getDay() << "/" << pkg1->getMonth() << "/" << pkg1->getYear() << endl;
			delete pkg1;

			cout << "Do you want remove package or add new user to the system(YES-Y/NO-N).   :  ";
			cin >> letter;

			if (letter == "Y")
			{
				pkg1->RemovePackages();
				pkg1->AddNewUser();
			}
			else
			{
				continue;
			}

		}
		else {
			break;
		}
		i++;
		cout << "******************************************************************************************************" << endl;
	}

	//----------------------------end Admin class----------------------------------------------------------------------------

	//----------------------------start Resitered user class----------------------------------------------------------------------------
	
	register_user RG1, RG2;

	RG1.login();
	RG1.displayDetails();

	RG2.login();
	RG2.displayDetails();
	
	//----------------------------end Resitered user class----------------------------------------------------------------------------

	//----------------------------start Manager class-------------------------------------------------------------------------------
	
	Manager Mgr1, Mgr2;

	Mgr1.login();
	Mgr1.getTours();
	Mgr1.confirmBooking();
	Mgr1.Manage();

	Mgr2.login();
	Mgr2.getTours();
	Mgr2.confirmBooking();
	Mgr2.Manage();

	//----------------------------end Manager class-------------------------------------------------------------------------------

	//----------------------------start Driver class-------------------------------------------------------------------------------

	Driver* D1;
	Driver* D2;

	D1 = new Driver();
	D2 = new Driver();

	D1->checkTours();
	D1->ViewStatus();

	D2->checkTours();
	D2->ViewStatus();

	delete D1;
	delete D2;

	//----------------------------end Driver class-------------------------------------------------------------------------------

	//----------------------------start Financial_Records class-------------------------------------------------------------------------------

	Financial_Records F1, F2;

	F1.Update();
	F1.generatePayment();
	F1.calcTotal();

	F2.Update();
	F2.generatePayment();
	F2.calcTotal();

	//----------------------------end Financial_Records class-------------------------------------------------------------------------------
	
	return 0;
}