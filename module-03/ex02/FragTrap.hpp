#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    FragTrap( void );
public:
	FragTrap( FragTrap const& copy );
	FragTrap( std::string const& name );
	~FragTrap( void );

	FragTrap&	operator=( FragTrap const& rhs );

	void		highFivesGuys( void );
};

#endif
