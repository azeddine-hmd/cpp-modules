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


	return 0;
}
