// IT number
//name 

#include "Financial_Records.h"
#include<iostream>
using namespace std;

Financial_Records::Financial_Records()
{
	TransactionID = 0;
}
Financial_Records::Financial_Records(int pTransactionID)
{
	TransactionID = pTransactionID;
}
void Financial_Records::Update() {}

int Financial_Records::generatePayment() {}

float Financial_Records::calcTotal() {}

Financial_Records::~Financial_Records()
{
	cout << "Record is deleted.";
}

