#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "Animal.hpp"

class WrongCat : public Animal
{
	public:
		WrongCat();
		~WrongCat();
		void makeSound() const;
};

#endif