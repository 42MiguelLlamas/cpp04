#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	int i = 0;
	AAnimal **meta = new AAnimal*[6];
	//const AAnimal *a = new AAnimal(); //falla si es abstracta la clase
	//a->makeSound();
	meta[0] = new Dog();
	meta[1] = new Dog();
	meta[2] = new Dog();
	meta[3] = new Cat();
	meta[4] = new WrongCat();
	meta[5] = new Cat();
	while (i < 6)
	{
		meta[i]->makeSound();
		i++;
	}
	i = 0;
	//static_cast<WrongCat*>(meta[4])->printIdeas();
	while (i < 6)
	{
		delete(meta[i]);
		i++;
	}
	delete[] meta;
	return 0;
}
