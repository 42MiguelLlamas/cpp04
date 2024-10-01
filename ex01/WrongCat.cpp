#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "Cat";
    std::cout << "Cat constructor" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Cat destructor" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Miau mal." << std::endl;
}