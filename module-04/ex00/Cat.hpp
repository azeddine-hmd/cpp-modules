#pragma once

#include <iostream>
#include "Animal.hpp"

class Cat : virtual public Animal {
public:
	Cat( void );
	~Cat( void );
	Cat( Cat const& copy );

	Cat&	operator=( Cat const& rhs );
};
