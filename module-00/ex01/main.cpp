/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:07:23 by ahamdaou          #+#    #+#             */
/*   Updated: 2021/12/15 15:07:23 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

int	main(void) {
	PhoneBook phoneBook;
	std::system("clear");
	phoneBook.loop();
	return 0;
}
