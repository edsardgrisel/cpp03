#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : name("Nameless"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Parameterized constructor called" << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
}

// Copy assignment operator overload
ClapTrap&	ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints < 1)
	{
		std::cout << "ClapTrap " << this->name << " does not have enough energy points to attack" << std::endl;
		return;
	}
	if (this->hitPoints < 1)
	{
		std::cout << "ClapTrap " << this->name << " does not have enough hit points to attack" << std::endl;
		return;
	}
	--(this->energyPoints);
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hitPoints -= amount;
	std::cout << "ClapTrap " << this->name << " is attacked" << ", causing " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints < 1)
	{
		std::cout << "ClapTrap " << this->name << " does not have enough energy points to be repaired" << std::endl;
		return;
	}
	if (this->hitPoints < 1)
	{
		std::cout << "ClapTrap " << this->name << " does not have enough hit points to be repaired" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " is repaired" << ", regaining " << amount << " hit points!" << std::endl;

}