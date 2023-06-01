#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete j;
	delete i;
	delete meta;

	// wrong animal / cat test
	std::cout << "\n Wrong Animal / Cat test \n" << std::endl;

	const WrongAnimal* test = new WrongAnimal();
	const WrongAnimal* test1 = new WrongCat();
	const WrongCat* test2 = new WrongCat();

	std::cout << test1->getType() << " " << std::endl;
	std::cout << test2->getType() << " " << std::endl;
	test1->makeSound();
	test2->makeSound();
	test->makeSound();
	delete test;
	delete test1;
	delete test2;
	return 0;
}
//gettype probleme