#pragma once

#include <iostream>

class Animal {
protected:
	std::string mType;
public:
	Animal( void );
	Animal( Animal const& copy );
	virtual ~Animal( void );

	Animal&	operator=( Animal const& rhs );

	std::string const&	getType( void ) const;
	void				setType( std::string const& type );

	virtual void		makeSound( void );
};
