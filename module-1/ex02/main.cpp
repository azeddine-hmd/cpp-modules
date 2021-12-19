/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 19:47:42 by ahamdaou          #+#    #+#             */
/*   Updated: 2021/12/19 19:47:42 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void ) {
	std::string str = std::string("HI THIS IS BRAIN");
	std::string* strPTR = &str;
	std::string& strREF = str;

	// displaing string address
	std::cout << "address of string: " << &str << std::endl;
	std::cout << "address of string using pointer: " << strPTR << std::endl;
	std::cout << "address of string using reference: " << &strREF << std::endl;

	std::cout << std::endl;

	// displaying string
	std::cout << "displaying string using pointer: " << *strPTR << std::endl;
	std::cout << "displaying string using reference: " << strREF << std::endl;

	return 0;
}
