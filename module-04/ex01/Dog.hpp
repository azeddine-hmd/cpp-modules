#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	Brain*	mBrain;
public:
	Dog( void );
	~Dog( void );
	Dog( Dog const& copy );

	Dog&			operator=( Dog const& rhs );

	Brain const&	getBrain( void ) const;

	void	makeSound( void ) const;
};
