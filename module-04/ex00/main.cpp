#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal const		*animal = new Animal();
	Animal const		*dog = new Dog();
	Animal const		*cat = new Cat();

	std::cout << cat->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;

	dog->makeSound();
	cat->makeSound();
	animal->makeSound();

	delete animal;
	delete cat;
	delete dog;
}
