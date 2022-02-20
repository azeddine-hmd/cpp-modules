#pragma once

#include <iostream>

class Brain {
	std::string mIdeas[100];
public:
	Brain( void );
	virtual ~Brain( void );
	Brain( Brain const& copy );

	Brain&				operator=( Brain const& rhs );

	std::string const*	getIdeas( void ) const;
};
