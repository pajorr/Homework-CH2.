#include <iostream>


int main()
{
	float east = 58;
	float totalSales = 100; // percent
	float totalAmount = 8.6;
	
	float eastSales = east / totalSales * totalAmount;
	
	std::cout<<"$";std::cout<<eastSales;std::cout<<"Million";
}
