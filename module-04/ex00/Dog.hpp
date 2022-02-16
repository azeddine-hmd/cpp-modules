#pragma once

#include <iostream>
#include "Animal.hpp"

class Dog : virtual public Animal {
public:
	Dog( void );
	~Dog( void );
	Dog( Dog const & b );

	Dog&	operator=( Dog const& rhs );

	void	makeSound( void ) const;
};
