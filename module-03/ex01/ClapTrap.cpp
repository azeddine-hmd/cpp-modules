#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {}

ClapTrap::ClapTrap( std::string name ): mName(name), mHitPoint(10), mEnergyPoint(10), mAttackDamage(0) {
	std::cout << "ClapTrap: argument constructor called!" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const& copy ) {
	*this = copy;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap: destructor called!" << std::endl;
}

ClapTrap&	ClapTrap::operator=( ClapTrap const& rhs ) {
	mName = rhs.getName();
	mHitPoint = rhs.getHitPoint();
	mEnergyPoint = rhs.getEnergyPoint();
	mAttackDamage = rhs.getAttackDamage();

	return *this;
}

std::string const&	ClapTrap::getName( void ) const {
	return mName;
}

void	ClapTrap::setName( std::string const& name ) {
	mName = name;
}

unsigned int	ClapTrap::getHitPoint( void ) const {
	return mHitPoint;
}

void	ClapTrap::setHitPoint( unsigned int hp) {
	mHitPoint = hp;
}

unsigned int	ClapTrap::getEnergyPoint( void ) const {
	return mEnergyPoint;
}

void	ClapTrap::setEnergyPoint( unsigned int ep ) {
	mEnergyPoint = ep;
}

unsigned int	ClapTrap::getAttackDamage( void ) const {
	return mAttackDamage;
}

void	ClapTrap::setAttackDamage( unsigned int attackDamage ) {
    mAttackDamage = attackDamage;
}

void	ClapTrap::attack( std::string const& target ) {
	std::cout << "ClapTrap " << mName << " attack " << target << ", causing " << mAttackDamage << " points of damage!" << std::endl;

}

void	ClapTrap::takeDamage( unsigned int amount ) {
	std::cout << "ClapTrap " << mName << " takes " << amount << " points of damage!" << std::endl;

	if (mHitPoint - amount < 0)
		mHitPoint = 0;
	else
		mHitPoint -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << mName << " have repaired " << amount << " of hit points!" << std::endl;

	if (mEnergyPoint != 0)
	{
		mEnergyPoint--;
		mHitPoint += amount;
	}
}
