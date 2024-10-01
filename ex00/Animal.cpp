#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal constructed" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type)
{
    std::cout << "Animal copied" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructed" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Some generic animal sound!" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}