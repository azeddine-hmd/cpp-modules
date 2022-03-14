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

#include "AForm.hpp"
#include "Intern.hpp"

int		main() {
    Intern intern;

    AForm *scf = intern.makeForm("shrubbery creation", "strawberry");
    AForm *rrf = intern.makeForm("robotomy request", "Bender");
    AForm *ppf = intern.makeForm("presidential pardon", "truce");

    std::cout << std::endl;

    std::cout << "shrubbery creation form's name is: " << scf->getName() << std::endl;
    std::cout << "Robotomy request form's name is: " << rrf->getName() << std::endl;
    std::cout << "presidential pardon form's name is: " << ppf->getName() << std::endl;

    return 0;
}
