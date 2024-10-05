#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog constructed" << std::endl;
    brain = new Brain();
}

Dog::Dog (Dog const& a)
{
    std::cout << "Copy constructor called" << std::endl;
    this->type = a.type;
    this->brain = a.brain;
};

Dog& Dog::operator=(Dog const& other) 
{
    if (this == &other)
        return *this;
    this->type = other.type;
    this->brain = other.brain;
    return *this;
};

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructed" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Guau." << std::endl;
}