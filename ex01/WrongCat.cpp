#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "Cat";
    std::cout << "Wrong Cat constructor" << std::endl;
}

WrongCat::WrongCat (WrongCat const& a)
{
    std::cout << "Wrong Copy constructor called" << std::endl;
    this->type = a.type;
};

WrongCat& WrongCat::operator=(WrongCat const& other) 
{
    if (this == &other)
        return *this;
    this->type = other.type;
    return *this;
};

WrongCat::~WrongCat()
{
    std::cout << "Wrong Cat destructor" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Miau mal." << std::endl;
}