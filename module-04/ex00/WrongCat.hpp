#pragma once

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat( void );
	~WrongCat( void );
	WrongCat( WrongCat const& copy );

	WrongCat&	operator=( WrongCat const& rhs );

	void	makeSound( void ) const;
};
