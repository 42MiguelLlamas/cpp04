#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
	protected:
    	std::string type;

	public:
    	AAnimal();
    	AAnimal(const AAnimal &other);
		AAnimal& operator=(AAnimal const& other);
		virtual ~AAnimal();
    	virtual void makeSound() const = 0;
    	virtual std::string getType() const;
};

#endif