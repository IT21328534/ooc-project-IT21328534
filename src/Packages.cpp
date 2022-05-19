// IT21333552
// Abeysinghe I. U.

#include "Packages.h"
#include<iostream>
using namespace std;


void Package::setPackageDetails(int SpackageID, double Sprice, int Snight, string Spackages, string Sinclusions)
{
	packageID = SpackageID;
	price = Sprice;
	night = Snight;
	packages = Spackages;
	inclusions = Sinclusions;
}

void Package::DisplayPackageDetails()
{
	cout << "Package Number		: " << packageID << endl
		<< "Package name		: " << packages << endl
		<< "Price			: RS." << price << endl
		<< "Nigth			:  " << night << endl
		<< "Inclusions		:  " << inclusions << endl << endl;
}

string Package::getPackages()
{
	return packages;
}


Package :: ~Package() {

	cout << "Package deleted." << endl;
}
