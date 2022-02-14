#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {}

FragTrap::FragTrap( FragTrap const& copy ) {
    *this = copy;
}

FragTrap::FragTrap( std::string const& name ): ClapTrap(name) {
	std::cout << "FragTrap: argument constructor called!" << std::endl;

    mHitPoint = 100;
    mEnergyPoint = 100;
    mAttackDamage = 30;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap: destructor called!" << std::endl;
}

FragTrap&   FragTrap::operator=( FragTrap const& rhs ) {
    ClapTrap::operator=(rhs);

    return *this;
}

void	FragTrap::highFivesGuys( void ) {
	std::cout << "FragTrap: all my homie High Fives" << std::endl;
}
