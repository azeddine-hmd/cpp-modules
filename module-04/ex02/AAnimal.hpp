#pragma once

#include <iostream>

class AAnimal {
protected:
	std::string mType;
public:
	AAnimal( void );
	AAnimal( AAnimal const& copy );
	virtual ~AAnimal( void );

	AAnimal&	operator=( AAnimal const& rhs );

	std::string const&	getType( void ) const;
	void				setType( std::string const& type );

	virtual void		makeSound( void ) const = 0;
};
