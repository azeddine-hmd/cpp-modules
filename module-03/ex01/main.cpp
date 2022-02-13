#include "ScavTrap.hpp"
#include <iostream>

int		main( void ) {
	ScavTrap scaver("Scaver");

	scaver.attack("Enemy");
	scaver.guardGate();
	scaver.takeDamage(100);
	scaver.beRepaired(100);

	return 0;
}
