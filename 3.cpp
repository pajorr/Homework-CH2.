#include <iostream>

int main()

{
	float purchase = 95;
	float tax = 6;
	
	float totaltax = tax/100 * 95;
	
	float total = purchase + totaltax;
	
	std::cout<<total;
}
