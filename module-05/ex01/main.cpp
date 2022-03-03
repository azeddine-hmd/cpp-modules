#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main( void ) {
	// Test: case which bureaucrat being able to sign the form
	try
	{
		Bureaucrat	mayor("Vitali", 1); // Note: vitali is the mayor of kyiv
		Form		surrenderForm("Surrender Form", 5, 5);

		mayor.signForm(surrenderForm);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	// Test: case which bureaucrat not being able to sign the form
	try
	{
		Bureaucrat	primeMinister("Aziz Akhannouch", 4);
		Form		truce("Westren Sahara Truce", 1, 1);

		primeMinister.signForm(truce);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
