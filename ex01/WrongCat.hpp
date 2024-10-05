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
		WrongCat(std::string type);
		WrongCat(WrongCat const &cat);
		WrongCat& operator=(WrongCat const& other);
		~WrongCat();
		void makeSound() const;
		void printIdeas();
};

#endif