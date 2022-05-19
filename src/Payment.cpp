// IT number
//name 

#include"Packages.h"
#include "Payment.h"
#include<iostream>
using namespace std;


void payment::setPaymentDetails(int P_paymentID, double P_price, string P_packages, int P_pkgID)
{
	paymentID = P_paymentID;
	price = P_price;
	packages = P_packages;
	pkgID = P_pkgID;
}
double payment::calculateTotalAmount()
{
	return price;
}

int payment::packageID()
{
	cout << "Enter package ID  : ";
	cin >> pkgID;
	return pkgID;
}

void payment::newPayment()
{                          }

void payment::Validate()
{                          }

payment::~payment()
{
	cout << "Payment deleted.";
}
