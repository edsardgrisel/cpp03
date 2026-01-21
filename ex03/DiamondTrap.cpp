#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap("Nameless_clap_name"), FragTrap(), ScavTrap(), name("Nameless")
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), name(name)
{
	std::cout << "DiamondTrap Parameterized constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
	std::cout << "DiamondTrap name: " << this->name << std::endl;
}