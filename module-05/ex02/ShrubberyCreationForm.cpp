#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string const& target ): AForm(target, 145, 137) {
	std::cout << "ShrubberyCreationForm: constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const& copy ): AForm(copy.getName(), copy.getSignatureGrade(), copy.getExecutionGrade()) {
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
	std::cout << "ShrubberyCreationForm: destructor called" << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( ShrubberyCreationForm const& rhs ) {
	AForm::operator=(rhs);

	return *this;
}


void	ShrubberyCreationForm::execute( Bureaucrat const& executer ) const {
	if (!getIsSigned()) {
		throw AForm::NotSigned();
	} else if ( getSignatureGrade() < executer.getGrade() ) {
		throw AForm::GradeTooLowException();
	}

	std::ofstream file( getName() + "_shrubbery" );

	file <<  "_________________0" << std::endl;
	file << "________________00" << std::endl;
	file << "_______________0000" << std::endl;
	file << "___0__________000000___________0" << std::endl;
	file << "___00_________000000___________0" << std::endl;
	file << "____0000______000000__________00" << std::endl;
	file << "____000000____0000000_____00000" << std::endl;
	file << "_0_____0000000_000000_00000000___0" << std::endl;
	file << "00______000000_00000_0000000____00" << std::endl;
	file << "0000_____000000_000_000000____0000" << std::endl;
	file << "_000000000__0000_0_000_0_000000000" << std::endl;
	file << "____000000000__0_0_0_00000000000" << std::endl;
	file << "________000000000000000000000" << std::endl;
	file << "______________000_0_0000" << std::endl;
	file << "____________00000_0__00000" << std::endl;
	file << "__________00_______0_______00" << std::endl;
	file << "____________________0" << std::endl;

	file.close();
}
