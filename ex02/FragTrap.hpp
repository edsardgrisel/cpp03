#include "ClapTrap.hpp"
#include <string>

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap : public ClapTrap
{
private:

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

#endif // FRAGTRAP_HPP