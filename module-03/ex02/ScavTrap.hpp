#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	ScavTrap( void );
public:
	ScavTrap( std::string const& name );
	ScavTrap( ScavTrap const& copy );
	~ScavTrap( void );

	ScavTrap&	operator=( ScavTrap const& rhs );

	void		attack( std::string const& target );
	void		guardGate( void );
};

#endif
