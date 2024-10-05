#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(Cat const &cat);
		Cat(std::string type);
		Cat& operator=(Cat const& other);
		~Cat();
		void makeSound() const;
};

#endif