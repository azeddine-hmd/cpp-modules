#include <iostream>
#include "Converter.hpp"

int		main( int argc, char **argv ) {

	if (argc != 2) {
		std::cout \
		<< "convert: error: bad arguments" << std::endl \
		<< "usage: ./convert VALUE" << std::endl;
		return 1;
	}

	Converter conv(argv[1]);
	std::cout << conv << std::endl;

	return 0;
}
