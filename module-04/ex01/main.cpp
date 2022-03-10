/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:27:41 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 15:27:41 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define SIZE 4
int main( void )
{
	Animal* animals[SIZE];

	// creation
	for (int i = 0; i < SIZE; i++) {
		if (i % 2 == 0)  {
			animals[i] = new Dog();
		} else {
			animals[i] = new Cat();
		}
	}

	// deletion
	for (int i = 0; i < 4; i++) {
		delete animals[i];
	}


	// deep copy
	Dog dog;
	Cat cat;
	{
		Dog doggo(dog);
		Cat evilCat(cat);
	}

	std::cout << std::endl;
	std::cout << dog.getBrain().getIdeas()[0] << std::endl;

	std::cout << cat.getBrain().getIdeas()[0] << std::endl;
	std::cout << std::endl;


	return 0;
}
