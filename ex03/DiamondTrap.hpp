#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string	name;
public:
	// Default constructor
	DiamondTrap();
	// Parameterized constructor
	DiamondTrap(std::string name);
	// Copy constructor
	DiamondTrap(const DiamondTrap &other);
	// Copy assignment operator overload
	DiamondTrap&	operator=(const DiamondTrap &other);
	// Deconstructor
	~DiamondTrap();

	
	void whoAmI();
};

#endif // DIAMONDTRAP_HPP
