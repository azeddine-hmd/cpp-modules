/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:19:26 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/02/09 19:19:26 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int     main( void ) {
	ClapTrap boomer("Boomer");
	ClapTrap zoomer("Zoomer");

	boomer.attack(zoomer.getName());
	zoomer.takeDamage(0);
	zoomer.beRepaired(0);

    return 0;
}
