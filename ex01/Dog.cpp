#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog constructed" << std::endl;
}

Dog::Dog (Dog const& a)
{
    std::cout << "Copy constructor called" << std::endl;
    this->type = a.type;
};

Dog& Dog::operator=(Dog const& other) 
{
    if (this == &other)
        return *this;
    this->type = other.type;
    return *this;
};

Dog::~Dog()
{
    std::cout << "Dog destructed" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Guau." << std::endl;
}