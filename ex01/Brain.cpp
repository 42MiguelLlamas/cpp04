#include "Brain.hpp"

Brain::Brain()
{
    brain = new Brain();
    std::cout << "Brain constructor" << std::endl;
}

Brain::Brain (Brain const& a)
{
    std::cout << "Copy constructor called" << std::endl;
    this->ideas = a.ideas;
};


Brain& Brain::operator=(Brain const& other) 
{
    if (this == &other)
        return *this;
    this->ideas = other.ideas;
    return *this;
};