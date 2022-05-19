// IT number
//name 

#include "Guest.h"
#include <iostream>
using namespace std;


void guest::inputUserDetails()
{
	cout << "Enter ID : ";
	cin >> UserID;

	cout << "Enter Name :";
	cin >> UserName;

	cout << "Enter Address  :";
	cin >> UserAddress;

	cout << "Enter Email  : ";
	cin >> UserEmail;

	cout << "Enter phone number :";
	cin >> Number;
}


void guest::displayDetails()
{
	cout << "ID  :" << UserID << endl
		<< "Name  :" << UserName << endl
		<< "Address  : " << UserAddress << endl
		<< "Email  : " << UserEmail << endl
		<< "Phone number  :" << Number << endl;
}
