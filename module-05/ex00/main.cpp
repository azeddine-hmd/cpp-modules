#include <iostream>
#include "Bureaucrat.hpp"

int		main( void ) {

	// grade too high
	try {
		Bureaucrat b("unknown", -1);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	// grade too low
	try {
		Bureaucrat b("unknown", 151);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	// valid bureaucrat
	Bureaucrat putin("Vladimir Putin", 1);
	std::cout << putin << std::endl;

	return 0;
}
