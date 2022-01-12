#include "Customer.h"

Customer::Customer()
{
	fName = "";
	lName = "";
	address = "";
	phone = "";
}

Customer::~Customer()
{
}

void Customer::setFName(string fName_)
{
	fName = fName_;
}

string Customer::getFName()
{
	return fName;
}