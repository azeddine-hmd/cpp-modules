/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:43:01 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 18:43:01 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int		main( void ) {

	// grade too high
	try {
		Bureaucrat b("unknown", -1);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	// grade too low
	try {
		Bureaucrat b("unknown", 151);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	// valid bureaucrat
	Bureaucrat putin("Vladimir Putin", 1);
	std::cout << putin << std::endl;

	try {
		putin.incGrade();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat degenerate("unknown", 150);
		degenerate.decGrade();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
