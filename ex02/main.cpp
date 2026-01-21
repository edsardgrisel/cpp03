#include <iostream>
#include "FragTrap.hpp"

int main()
{
	
	// Test default constructor
	std::cout << "\nTest default constructor hit points\n" << "------------------------------" << std::endl;
	FragTrap defaultFragTrap;
	defaultFragTrap.takeDamage(99);
	defaultFragTrap.attack("enemy");
	defaultFragTrap.takeDamage(1);
	defaultFragTrap.attack("enemy");

	std::cout << "\nTest parameterized constructor repair\n" << "------------------------------" << std::endl;
	FragTrap paramterizedFragTrap("A");
	paramterizedFragTrap.beRepaired(10);
	paramterizedFragTrap.takeDamage(109);
	paramterizedFragTrap.attack("enemy");


	std::cout << "\nTest high five()\n" << "------------------------------" << std::endl;
	FragTrap highFiveFragTrap;
	highFiveFragTrap = paramterizedFragTrap;
	highFiveFragTrap.highFivesGuys();

	std::cout << "\n\n";
	return 0;
}