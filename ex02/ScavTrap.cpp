#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->inGateKeeperMode = false;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Parameterized constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->inGateKeeperMode = false;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->energyPoints < 1)
		{
			std::cout << "ScavTrap " << this->name << " does not have enough energy points to attack" << std::endl;
			return;
		}
		if (this->hitPoints < 1)
		{
			std::cout << "ScavTrap " << this->name << " does not have enough hit points to attack" << std::endl;
			return;
		}
		--(this->energyPoints);
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is in gate keeper mode." << std::endl;
	this->inGateKeeperMode = true;
}
