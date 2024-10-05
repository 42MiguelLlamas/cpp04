#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
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