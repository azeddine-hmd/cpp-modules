#include <iostream>
#include "ClapTrap.hpp"

int     main( void ) {
	ClapTrap boomer("Boomer");
	ClapTrap zoomer("Zoomer");

	boomer.attack(zoomer.getName());
	zoomer.takeDamage(0);
	zoomer.beRepaired(0);

    return 0;
}
