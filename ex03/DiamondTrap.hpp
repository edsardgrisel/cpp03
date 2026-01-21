#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

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

	void attack(const std::string& target);
	void whoAmI();
};