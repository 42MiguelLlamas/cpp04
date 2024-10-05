#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "Cat";
    std::cout << "Wrong Cat constructor" << std::endl;
    brain = new Brain();
}

WrongCat::WrongCat (WrongCat const& a)
{
    std::cout << "Wrong Copy constructor called" << std::endl;
    this->type = a.type;
    this->brain = a.brain;
};

WrongCat& WrongCat::operator=(WrongCat const& other) 
{
    if (this == &other)
        return *this;
    this->type = other.type;
    this->brain = other.brain;
    return *this;
};

WrongCat::~WrongCat()
{
    delete brain;
    std::cout << "Wrong Cat destructor" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Miau mal." << std::endl;
}

void WrongCat::printIdeas()
{
    int i = 0;
    while (i < 100)
    {
        std::cout<<this->brain->ideas[i]<<std::endl;
        i++;
    }
}