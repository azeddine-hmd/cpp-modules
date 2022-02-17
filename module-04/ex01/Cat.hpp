#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	Brain*	mBrain;
public:
	Cat( void );
	~Cat( void );
	Cat( Cat const& copy );

	Cat&			operator=( Cat const& rhs );

	Brain const&	getBrain( void ) const;

	void			makeSound( void ) const;
};
