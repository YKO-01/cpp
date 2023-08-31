#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
}

void	ScavTrap::guardGate()
{
	std::cout << "informing that ScavTrap is now in Gate \
		keeper mode." << std::endl;
}
