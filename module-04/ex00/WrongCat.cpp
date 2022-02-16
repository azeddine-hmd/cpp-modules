#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	std::cout << "WrongCat: default constructor called!" << std::endl;

	mType = "WrongCat";
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat: destrcutor called!" << std::endl;
}

WrongCat::WrongCat( WrongCat const& copy ) {
	*this = copy;
}

WrongCat&	WrongCat::operator=(const WrongCat &rhs) {
	WrongAnimal::operator=(rhs);

	return *this;
}

void	WrongCat::makeSound( void ) const {
	std::cout << "the wrong-cat sound!" << std::endl;
}
