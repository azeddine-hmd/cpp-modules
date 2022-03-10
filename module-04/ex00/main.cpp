#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
	Animal const		*animal = new Animal();
	Animal const		*dog = new Dog();
	Animal const		*cat = new Cat();


	std::cout << "type: " << cat->getType() << std::endl;
	std::cout << "type: " << dog->getType() << std::endl;

	dog->makeSound();
	cat->makeSound();
	animal->makeSound();

	delete cat;
	delete dog;
	delete animal;

	WrongAnimal const	*wrongAnimal = new WrongAnimal();
	WrongAnimal const	*wrongCat = new WrongCat();
	WrongAnimal const	*wrongDog = new WrongDog();

	std::cout << "type: " << wrongCat->getType() << std::endl;
	std::cout << "type: " << wrongDog->getType() << std::endl;

	wrongDog->makeSound();
	wrongCat->makeSound();
	wrongAnimal->makeSound();

	delete wrongCat;
	delete wrongDog;
	delete wrongAnimal;

}
