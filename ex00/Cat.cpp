#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat constructor" << std::endl;
}

Cat::Cat (Cat const& a)
{
    std::cout << "Copy constructor called" << std::endl;
    this->type = a.type;
};

Cat& Cat::operator=(Cat const& other) 
{
    if (this == &other)
        return *this;
    this->type = other.type;
    return *this;
};

Cat::~Cat()
{
    std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Miau." << std::endl;
}

