#pragma once

#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	ShrubberyCreationForm( void );
public:
	ShrubberyCreationForm( std::string const& target );
	ShrubberyCreationForm( ShrubberyCreationForm const& copy );
	~ShrubberyCreationForm( void );
	ShrubberyCreationForm&	operator=( ShrubberyCreationForm const& rhs );

	void	execute( Bureaucrat const& executer ) const;
};

std::ostream&	operator<<( std::ostream& out, ShrubberyCreationForm const& obj );
