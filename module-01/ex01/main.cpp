/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 19:11:33 by ahamdaou          #+#    #+#             */
/*   Updated: 2021/12/19 19:11:33 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void ) {
	int N = 10;
	Zombie* bunchOfZombies = zombieHorde(N, "chunky zombie");
	for (int i = 0; i < N; i++) {
		bunchOfZombies[N].announce();
	}
	delete[] bunchOfZombies;

	return 0;
}
