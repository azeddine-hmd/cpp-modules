/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:49:57 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/02/09 18:49:57 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    std::string mName;
    unsigned    mHitPoint;
    unsigned    mEnergyPoint;
    unsigned    mAttackDamage;

    ClapTrap( void );
public:
    ClapTrap( std::string name );
    ClapTrap( ClapTrap const& copy );
    ~ClapTrap( void );

	ClapTrap&	operator=( ClapTrap const& rhs );

	std::string const&  getName( void ) const;
    void                setName( std::string const& name );
    unsigned int        getHitPoint( void ) const;
    void                setHitPoint( unsigned int hitPoint );
    unsigned int        getEnergyPoint( void ) const;
    void                setEnergyPoint( unsigned int energyPoint );
    unsigned int        getAttackDamage( void ) const;
    void                setAttackDamage( unsigned int attackDamage );

    void    attack( std::string const& target );
    void    takeDamage( unsigned int amount );
    void    beRepaired( unsigned int amount );
};

#endif
