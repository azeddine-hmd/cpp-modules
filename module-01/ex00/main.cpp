/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 19:57:43 by ahamdaou          #+#    #+#             */
/*   Updated: 2021/12/18 19:57:43 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {

	Zombie* zombie = newZombie(std::string("azeddine"));
	zombie->announce();
	delete zombie;

	randomChump("undead");
	randomChump("walking dead");

	return 0;
}
