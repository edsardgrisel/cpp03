#include <string>

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

class ClapTrap
{
	protected:
		std::string name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;

		
	public:
		// Default constructor
		ClapTrap();
		// Parameterized constructor
		ClapTrap(std::string name);
		// Copy constructor
		ClapTrap(const ClapTrap &other);
		
		// Copy assignment operator overload
		ClapTrap&	operator=(const ClapTrap &other);
		
		// Destructor
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif // CLAPTRAP_HPP
