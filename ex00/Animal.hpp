#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
    	std::string type;

	public:
    // Constructors
    	Animal();
    	Animal(const Animal &other);
		~Animal();
    	virtual void makeSound() const;
    	std::string getType() const;
};

#endif