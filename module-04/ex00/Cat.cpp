#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Cat: default constructor called!" << std::endl;

	mType = "Cat";
}

Cat::~Cat( void ) {
	std::cout << "Cat: destrcutor called!" << std::endl;
}

Cat::Cat( Cat const& copy ) {
	*this = copy;
}

Cat&	Cat::operator=(const Cat &rhs) {
	Animal::operator=(rhs);

	return *this;
}
