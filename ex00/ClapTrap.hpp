#include <string>

class ClapTrap
{
	private:
		std::string name;
		int			hitPoints = 10;
		int			energyPoints = 10;
		int			attackDamage = 0;

		
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
