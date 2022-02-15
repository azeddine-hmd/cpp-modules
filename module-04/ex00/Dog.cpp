#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Dog: default constructor called!" << std::endl;
	mType = "Dog";
}

Dog::~Dog( void ) {
	std::cout << "Dog: destructor called!" << std::endl;
}

Dog::Dog( Dog  const& copy ) {
	*this = copy;
}

Dog&	Dog::operator=(const Dog &rhs) {
	Animal::operator=(rhs);

	return *this;
}
