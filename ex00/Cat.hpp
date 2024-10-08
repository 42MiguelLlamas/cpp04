#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &cat);
		Cat(std::string type);
		Cat& operator=(Cat const& other);
		~Cat();
		void makeSound() const;
};

#endif