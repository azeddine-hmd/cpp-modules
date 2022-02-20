#pragma once

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
	Brain*	mBrain;
public:
	Dog( void );
	~Dog( void );
	Dog( Dog const& copy );

	Dog&			operator=( Dog const& rhs );

	Brain const&	getBrain( void ) const;

	void	makeSound( void ) const;
};
