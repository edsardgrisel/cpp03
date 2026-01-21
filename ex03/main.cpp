#include <iostream>
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamondTrapA("B");

	// test hit points (100) from FragTrap
	std::cout << "\nTest hitpoints\n" << "------------------------------" << std::endl;
	diamondTrapA.takeDamage(99);
	diamondTrapA.attack("enemy");
	diamondTrapA.takeDamage(1);
	diamondTrapA.attack("enemy");

	// test attack. attack() from ScavTrap, attack damage (30) from FragTrap
	std::cout << "\nTest attack\n" << "------------------------------" << std::endl;
	DiamondTrap diamondTrapB("B");
	diamondTrapB.attack("enemy");

	// Test whoami
	std::cout << "\nTest whoami\n" << "------------------------------" << std::endl;
	diamondTrapB.whoAmI();

	// Test High Five from FragTrap
	std::cout << "\nTest High Five()\n" << "------------------------------" << std::endl;
	diamondTrapB.highFivesGuys();

	// Test gaurdGate from FragTrap
	std::cout << "\nTest gaurdGate() \n" << "------------------------------" << std::endl;
	diamondTrapB.guardGate();


	std::cout << "\n\n";
	return 0;
}