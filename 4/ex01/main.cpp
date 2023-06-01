#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int	main(void)
{
	Animal	*test[100];

	Dog basic;
	{
		Dog tmp = basic;
		Dog test;
		test = tmp;
	}
	for (int i=0;i<50;i++)
	{
		test[i] = new Dog;
	}
	for (int j=50;j<100;j++)
	{
		test[j] = new Cat;
	}
	for(int k=0;k<100;k++)
	{
		delete test[k];
	}
	return 0;
}