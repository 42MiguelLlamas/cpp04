#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(std::string type);
		Dog(Dog const &dog);
		Dog& operator=(Dog const& other);
		~Dog();
		void makeSound() const;
};

#endif