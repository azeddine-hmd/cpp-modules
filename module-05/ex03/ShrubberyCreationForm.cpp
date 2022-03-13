/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:57:36 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 18:57:36 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include "ShrubberyCreationForm.hpp"

std::string const ShrubberyCreationForm::trees[3] = {
	"      /\\\n" \
	"     /\\*\\\n" \
	"    /\\O\\*\\\n" \
	"   /*/\\/\\/\\\n" \
	"  /\\O\\/\\*\\/\\\n" \
	" /\\*\\/\\*\\/\\/\\\n" \
	"/\\O\\/\\/*/\\/O/\\\n" \
	"      ||\n" \
	"      ||\n" \
	"      ||\n",

	"         v\n" \
	"        >X<\n" \
	"         A\n" \
	"        d$b\n" \
	"      .d\\$$b.\n" \
	"    .d$i$$\\$$b.\n" \
	"       d$$@b\n" \
	"      d\\$$$ib\n" \
	"    .d$$$\\$$$b\n" \
	"  .d$$@$$$$\\$$ib.\n" \
	"      d$$i$$b\n" \
	"     d\\$$$$@$b\n" \
	"  .d$@$$\\$$$$$@b.\n" \
	".d$$$$i$$$\\$$$$$$b.\n" \
	"        ###\n" \
	"        ###\n" \
	"        ###\n" ,

	"         *\n" \
	"        /|\\\n" \
	"       /*|O\\\n" \
	"      /*/|\\*\\\n" \
	"     /X/O|*\\X\\\n" \
	"    /*/X/|\\X\\*\\\n" \
	"   /O/*/X|*\\O\\X\\\n" \
	"  /*/O/X/|\\X\\O\\*\\\n" \
	" /X/O/*/X|O\\X\\*\\O\\\n" \
	"/O/X/*/O/|\\X\\*\\O\\X\\\n" \
	"        |X|\n" \
	"        |X|\n"
};

ShrubberyCreationForm::ShrubberyCreationForm( void ): AForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string const& target ): AForm(target, 145, 137) {
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const& copy ): AForm(copy.getName(), copy.getSignatureGrade(), copy.getExecutionGrade()) {
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( ShrubberyCreationForm const& rhs ) {
	AForm::operator=(rhs);

	return *this;
}


void	ShrubberyCreationForm::execute( Bureaucrat const& executer ) const {
	AForm::execute(executer);

	std::string const filename( getName() + "_shrubbery" );
	std::ofstream targetFile( filename );
	if (targetFile.fail())
		throw std::runtime_error( "failed to open `" + filename + "`" );

	std::srand(std::time(NULL));
	int treeCount = std::rand() % 10 + 3;
	for (int i = 0; i < treeCount - 2; i++) {
		targetFile << ShrubberyCreationForm::trees[std::rand() % 3];
	}
	targetFile.close();
}
