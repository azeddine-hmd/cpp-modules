/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:46:41 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 18:46:41 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main( void ) {
	Bureaucrat chiefRealEstate("Chief Real Estate", 69);
	Bureaucrat farmer("farmer", 88);

	// test: shrubbery
	ShrubberyCreationForm firstShrubberyForm("strewberry");

	firstShrubberyForm.beSigned(chiefRealEstate);
	firstShrubberyForm.execute(farmer);

	// case of bureaucrat have high grade
	try {
		Bureaucrat evilChiefFarmer("evil chief farmer", -1);
		firstShrubberyForm.beSigned(evilChiefFarmer);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	// case of bureaucrat have low grade
	try {
		ShrubberyCreationForm redberry("redberry");
		Bureaucrat bc("simon", 150);

	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	// case of form not signed
	try {
		ShrubberyCreationForm unsignedForm("unsignedForm");
		unsignedForm.execute(farmer);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	// test: RobotomyRequestForm
	RobotomyRequestForm robot("alexa");
	Bureaucrat ChiefRobots("Chief Robots", 1);
	robot.beSigned(ChiefRobots);
	robot.execute(ChiefRobots);

	// test: PresidentialPardonForm
	PresidentialPardonForm warCrimesPardonForm("war crimes presidentail pardon form");
	Bureaucrat president("Zafod Beeblebrox", 1);
	warCrimesPardonForm.beSigned(president);
	warCrimesPardonForm.execute(president);

	return 0;
}
