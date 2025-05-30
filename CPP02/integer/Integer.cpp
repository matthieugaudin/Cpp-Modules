#include "Integer.hpp"

Integer::Integer(int n) : _n(n)
{
    return ;
}

Integer::~Integer(void)
{
    return ;
}

int Integer::getValue(void) const
{
    return (this->_n);
}

Integer &Integer::operator=(const Integer &rhs)
{
    this->_n = rhs._n;
    return (*this);
}

Integer Integer::operator+(const Integer &rhs) const
{
    return (Integer(this->_n + rhs._n));
}

std::ostream &operator<<(std::ostream &lhs, const Integer &rhs)
{
    lhs << rhs.getValue();
    return (lhs);
}