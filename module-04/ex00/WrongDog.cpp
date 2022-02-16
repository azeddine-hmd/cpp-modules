#include "WrongDog.hpp"

WrongDog::WrongDog( void ) {
	std::cout << "WrongDog: default constructor called!" << std::endl;
	mType = "WrongDog";
}

WrongDog::~WrongDog( void ) {
	std::cout << "WrongDog: destructor called!" << std::endl;
}

WrongDog::WrongDog( WrongDog  const& copy ) {
	*this = copy;
}

WrongDog&	WrongDog::operator=(const WrongDog &rhs) {
	WrongAnimal::operator=(rhs);

	return *this;
}

void	WrongDog::makeSound( void ) const {
	std::cout << "the wrong-dog sound!" << std::endl;
}
