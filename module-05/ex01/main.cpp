#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main( void ) {
	try
	{
		Bureaucrat	mayor("Vitali", 1);
		Form		surrenderForm("Surrender Form", 5, 5);

		surrenderForm.beSigned(mayor);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	primeMinister("Aziz Akhannouch", 1);
		Form		truce("Westren Sahara Truce", 1, 1);

		truce.beSigned(primeMinister);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
