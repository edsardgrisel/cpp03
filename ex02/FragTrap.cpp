#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Parameterized constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

// void	FragTrap::attack(const std::string& target)
// {
// 	if (this->energyPoints < 1)
// 		{
// 			std::cout << "FragTrap " << this->name << " does not have enough energy points to attack" << std::endl;
// 			return;
// 		}
// 		if (this->hitPoints < 1)
// 		{
// 			std::cout << "FragTrap " << this->name << " does not have enough hit points to attack" << std::endl;
// 			return;
// 		}
// 		--(this->energyPoints);
// 		std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
// }

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap high five" << std::endl;
}
