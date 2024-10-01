#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class WrongCat : public Animal
{
	private:
		Brain *brain;
	public:
		WrongCat();
		~WrongCat();
		void makeSound() const;
};

#endif