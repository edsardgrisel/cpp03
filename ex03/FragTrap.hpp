#include "ClapTrap.hpp"
#include <string>

class FragTrap : virtual public ClapTrap
{
private:
	bool	inGateKeeperMode;
public:
	// Default constructor
	FragTrap();
	// Parameterized constructor
	FragTrap(std::string name);
	// Copy constructor
	FragTrap(const FragTrap &other);
	// Copy assignment operator overload
	FragTrap&	operator=(const FragTrap &other);
	// Deconstructor
	~FragTrap();

	// void attack(const std::string& target);
	void highFivesGuys();
};