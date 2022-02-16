#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	std::cout << "WrongAnimal: constructor called!" << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal: destructor called!" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const& copy ) {
	*this = copy;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &rhs) {
	mType = rhs.getType();

	return *this;
}

std::string const&	WrongAnimal::getType( void ) const {
	return mType;
}

void	WrongAnimal::setType( std::string const& type ) {
	mType = type;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "the wrong-animal sound!" << std::endl;
}
