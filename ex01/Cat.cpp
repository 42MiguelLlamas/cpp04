#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat constructor" << std::endl;
    brain = new Brain();
}

Cat::Cat (Cat const& a)
{
    std::cout << "Copy constructor called" << std::endl;
    this->type = a.type;
    this->brain = a.brain;
};

Cat& Cat::operator=(Cat const& other) 
{
    if (this == &other)
        return *this;
    this->type = other.type;
    this->brain = other.brain;
    return *this;
};

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Miau." << std::endl;
}

