#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap
{
private:
	bool	inGateKeeperMode;
public:
	// Default constructor
	ScavTrap();
	// Parameterized constructor
	ScavTrap(std::string name);
	// Copy constructor
	ScavTrap(const ScavTrap &other);
	// Copy assignment operator overload
	ScavTrap&	operator=(const ScavTrap &other);
	// Deconstructor
	~ScavTrap();

	void attack(const std::string& target);
	void guardGate();
};