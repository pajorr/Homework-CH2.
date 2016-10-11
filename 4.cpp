#include <iostream>

int main()
{
	float charge = 88.67; //dollars
	float tax = 6.75/100 * charge; //percent
	float tip = 20.0/100 * charge; //percent
	float bill = charge + tax + tip;
	
	std::cout<<charge; std::cout<<"\n";
	std::cout<<tax; std::cout<<"\n";
	std::cout<<tip; std::cout<<"\n";
	std::cout<<bill; std::cout<<"\n";
	
}
