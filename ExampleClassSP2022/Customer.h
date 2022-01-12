#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

using namespace std;

class Customer
{
public:
	Customer();
	~Customer();

	void setFName(string fName_);
	string getFName();

private:
	string fName;
	string lName;
	string address;
	string phone;

};

#endif // !CUSTOMER_H

