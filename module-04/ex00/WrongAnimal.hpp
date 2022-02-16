#pragma once

#include <iostream>

class WrongAnimal {
protected:
	std::string	mType;
public:
	WrongAnimal( void );
	~WrongAnimal( void );
	WrongAnimal( WrongAnimal const& copy );

	WrongAnimal&	operator=( WrongAnimal const& rhs );

	std::string const&	getType( void ) const;
	void				setType( std::string const& type );

	void			makeSound( void ) const;
};
