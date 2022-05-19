// IT number
//name 

#include "Manager.h"
#include<iostream>
using namespace std;


Manager::Manager()
{
	MgrID = 0;
	strcpy(MgrName, "");
	strcpy(MgrEmail, "");
	strcpy(MgrPassword, "");
	strcpy(MgrUsername, "");
	MgrNumber = 0000000000;
}
Manager::Manager(int pMgrID, const char pMgrName[], const char pMgrEmail[], int pMgrNumber, const char pMgrUsername[], const char pMgrPassword[])
{
	MgrID = pMgrID;
	MgrNumber = pMgrNumber;
	strcpy(MgrName, pMgrName);
	strcpy(MgrEmail, pMgrEmail);
	strcpy(MgrPassword, pMgrPassword);
	strcpy(MgrUsername, pMgrUsername);

}
void Manager::login(const char L_MgrUsername[], const char L_MgrPassword[])
{
	strcpy(MgrPassword, L_MgrPassword);
	strcpy(MgrUsername, L_MgrUsername);
}
char Manager::confirmBooking()
{

}
void Manager::Manage()
{

}
char Manager::getTours()
{
	return 0;
}
Manager::~Manager()
{
	//Destructor
}
