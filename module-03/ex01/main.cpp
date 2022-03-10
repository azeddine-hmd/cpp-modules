/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 20:53:10 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/08 20:53:10 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main( void ) {
	ScavTrap scaver("Scaver");

	scaver.attack("Enemy");
	scaver.guardGate();
	scaver.takeDamage(100);
	scaver.beRepaired(100);

	return 0;
}
