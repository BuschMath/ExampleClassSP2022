#include "Customer.h"
#include <iostream>

using namespace std;

int main()
{
	Customer c;

	c.setFName("Sam");

	cout << c.getFName();

	return 0;
}