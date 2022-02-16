#pragma once

#include <iostream>
#include "WrongAnimal.hpp"

class WrongDog : virtual public WrongAnimal {
public:
	WrongDog( void );
	~WrongDog( void );
	WrongDog( WrongDog const & b );

	WrongDog&	operator=( WrongDog const& rhs );

	void	makeSound( void ) const;
};
