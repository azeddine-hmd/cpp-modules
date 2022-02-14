#include <iostream>
#include "FragTrap.hpp"

int     main( void ) {
	FragTrap	fragonic( "fragonic" );

	fragonic.attack( "dusty" );
	fragonic.takeDamage(100);
	fragonic.beRepaired(5);
	fragonic.highFivesGuys();

    return 0;
}
