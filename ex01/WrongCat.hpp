#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "Animal.hpp"

class WrongCat : public Animal
{
	public:
		WrongCat();
		WrongCat(std::string type);
		WrongCat(WrongCat const &cat);
		WrongCat& operator=(WrongCat const& other);
		~WrongCat();
		void makeSound() const;
};

#endif