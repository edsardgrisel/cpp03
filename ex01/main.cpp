#include <iostream>
#include "ScavTrap.hpp"

int main()
{
	
	// Test default constructor
	std::cout << "\nTest default constructor hit points\n" << "------------------------------" << std::endl;
	ScavTrap defaultScavTrap;
	defaultScavTrap.takeDamage(99);
	defaultScavTrap.attack("enemy");
	defaultScavTrap.takeDamage(1);
	defaultScavTrap.attack("enemy");

	std::cout << "\nTest parameterized constructor repair\n" << "------------------------------" << std::endl;
	ScavTrap paramterizedScavTrap("A");
	paramterizedScavTrap.beRepaired(10);
	paramterizedScavTrap.takeDamage(109);
	paramterizedScavTrap.attack("enemy");


	std::cout << "\nTest gaurdGate()\n" << "------------------------------" << std::endl;
	ScavTrap gaurdScavTrap;
	gaurdScavTrap = paramterizedScavTrap;
	gaurdScavTrap.guardGate();

	std::cout << "\n\n";
	return 0;
}