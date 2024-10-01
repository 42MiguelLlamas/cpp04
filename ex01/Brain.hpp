#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	protected:
    	std::string ideas[100];

	public:
    	Brain();
    	Brain(const Brain &other);
		virtual ~Brain();
    	virtual void makeSound() const;
    	virtual std::string getType() const;
};

#endif