#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    // std::cout << Fixed::max( a, b ) << std::endl;

    return 0;
}

// TO DO
// 4 member functions
// protect 0 division !
// make a good main of tests
// add all const