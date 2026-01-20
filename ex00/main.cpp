#include <iostream>
#include "ClapTrap.hpp"

int main()
{
	
	// Test default constructor
	std::cout << "\nTest default constructor\n" << "------------------------------" << std::endl;
	ClapTrap defaultClapTrap;
	defaultClapTrap.attack("enemy");
	defaultClapTrap.beRepaired(5);
	defaultClapTrap.takeDamage(3);
	
	// Test parameterized constructor
	std::cout << "\nTest parameterized constructor\n" << "------------------------------" << std::endl;
	ClapTrap parameterizedClapTrap("A");
	parameterizedClapTrap.attack("enemy");
	parameterizedClapTrap.takeDamage(8);
	parameterizedClapTrap.beRepaired(2);
	
	// Test copy constructor
	std::cout << "\nTest copy constructor\n" << "------------------------------" << std::endl;
	ClapTrap copiedClapTrap(parameterizedClapTrap);
	copiedClapTrap.attack("enemy");
	
	// Test assignment operator
	std::cout << "\nTest assignment operator\n" << "------------------------------" << std::endl;
	ClapTrap assignedClapTrap;
	assignedClapTrap = copiedClapTrap;
	assignedClapTrap.attack("enemy");
	
	// Test run out of energy
	std::cout << "\nTest run out of energy\n" << "------------------------------" << std::endl;
	ClapTrap tiredClapTrap("tired");
	for (int i = 0; i < 11; i++) {
		tiredClapTrap.attack("enemy");
	}
	tiredClapTrap.beRepaired(1);
	
	// Test zero hit points
	std::cout << "\nTest zero hit points\n" << "------------------------------" << std::endl;
	ClapTrap deadClapTrap("dead");
	deadClapTrap.takeDamage(15);
	deadClapTrap.attack("enemy");
	deadClapTrap.beRepaired(1);

	// Test repaired above 10
	std::cout << "\nTest repaired above 10\n" << "------------------------------" << std::endl;
	ClapTrap repairedClapTrap("repaired");
	repairedClapTrap.beRepaired(5);
	repairedClapTrap.takeDamage(14);
	repairedClapTrap.attack("enemy");
	
	return 0;
}