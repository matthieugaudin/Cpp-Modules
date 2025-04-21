#include <iostream>
#include "Sample.hpp"

int Sample::_nbInst = 0;

Sample::Sample(float x, float y) : x_val(x), y_val(y)
{
    std::cout << "Constructor called" << std::endl;
    Sample::_nbInst += 1;
    this->foo = 42;
    this->_foo = 0;
    std::cout << "foo : " << this->foo << std::endl;
    std::cout << "_foo : " << this->_foo << std::endl;
    std::cout << "Coordinates : (" << x << ", " << y << ")" <<std::endl;
    return ;
}

Sample::~Sample(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

void    Sample::bar(void) const
{
    std::cout << "Member function bar called" << std::endl;
    return ;
}

int    Sample::getFoo(void) const
{
    return (this->_foo);
}

void    Sample::setFoo(int value)
{
    if (value >= 0)
        this->_foo = value;
    return ;
}

int  Sample::getNbInst(void)
{
    return (Sample::_nbInst);
}