#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main( void ) {
	ShrubberyCreationForm firstShrubberyForm("strewberry");
	Bureaucrat firstChiefRealEstate("chief real estate", 69);
	Bureaucrat farmer("farmer", 88);

	firstShrubberyForm.beSigned(firstChiefRealEstate);
	firstShrubberyForm.execute(farmer);

	// case of form has not signed
	try {
		ShrubberyCreationForm blueberryForm("holy blueberry");
		Bureaucrat evilChiefFarmer("evil chief farmer", 1);

		blueberryForm.beSigned(evilChiefFarmer);
		blueberryForm.execute(farmer);
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


	return 0;
}
