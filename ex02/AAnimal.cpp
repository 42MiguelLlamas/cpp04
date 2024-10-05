#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
    std::cout << "AAnimal constructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) : type(other.type)
{
    std::cout << "AAnimal copy constructor" << std::endl;
}

AAnimal& AAnimal::operator=(AAnimal const& other) 
{
    if (this == &other)
        return *this;
    this->type = other.type;
    return *this;
};

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor" << std::endl;
}

void AAnimal::makeSound() const
{
    std::cout << "Bara bara bara, bere bere bere." << std::endl;
}

std::string AAnimal::getType() const
{
    return type;
};
