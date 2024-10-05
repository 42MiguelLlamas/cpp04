#include "Brain.hpp"

Brain::Brain()
{
    int i = 0;
    while (i < 100)
    {
        ideas[i] = "idea " + std::string(1, '0' + i);
        i++;
    }
    std::cout << "Brain constructor" << std::endl;
}

Brain::Brain (Brain const& a)
{
    std::cout << "Copy constructor called" << std::endl;
    int i = 0;
    while (i < 100)
    {
        ideas[i] = a.ideas[i];
    }
};


Brain& Brain::operator=(Brain const& other) 
{
    if (this == &other)
        return *this;
    int i = 0;
    while (i < 100)
    {
        ideas[i] = other.ideas[i];
    }
    return *this;
};

Brain::~Brain()
{
    std::cout << "Brain destructor" << std::endl;
}

void Brain::print()
{
    int i = 0;
    while (i < 100)
    {
        std::cout<<this->ideas[0] <<std::endl;
        i++;
    }
}