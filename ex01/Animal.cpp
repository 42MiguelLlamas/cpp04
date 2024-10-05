#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type)
{
    std::cout << "Animal copy constructor" << std::endl;
}

Animal& Animal::operator=(Animal const& other) 
{
    if (this == &other)
        return *this;
    this->type = other.type;
    return *this;
};

Animal::~Animal()
{
    std::cout << "Animal destructor" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Bara bara bara, bere bere bere." << std::endl;
}

std::string Animal::getType() const
{
    return type;
};
