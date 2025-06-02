#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << "== comparaison" << std::endl;
    std::cout << Fixed(5) / Fixed(2) << std::endl;
    std::cout << (Fixed(5) == 5 ? "true" : "false") << std::endl;
    std::cout << (Fixed(5) == 5.1f ? "true" : "false") << std::endl << std::endl;

    std::cout << "> comparaison" << std::endl;
    std::cout << (Fixed(5) > Fixed(6) ? "true" : "false") << std::endl;
    std::cout << (Fixed(6) > Fixed(5) ? "true" : "false") << std::endl << std::endl;

    std::cout << "< comparaison" << std::endl;
    std::cout << (Fixed(5) < Fixed(6) ? "true" : "false") << std::endl;
    std::cout << (Fixed(6) < Fixed(5) ? "true" : "false") << std::endl << std::endl;

    std::cout << ">= comparaison" << std::endl;
    std::cout << (Fixed(5) >= Fixed(6) ? "true" : "false") << std::endl;
    std::cout << (Fixed(6) >= Fixed(5) ? "true" : "false") << std::endl;
    std::cout << (Fixed(6) >= Fixed(6) ? "true" : "false") << std::endl << std::endl;

    std::cout << "<= comparaison" << std::endl;
    std::cout << (Fixed(5) <= Fixed(6) ? "true" : "false") << std::endl;
    std::cout << (Fixed(6) <= Fixed(5) ? "true" : "false") << std::endl;
    std::cout << (Fixed(6) <= Fixed(6) ? "true" : "false") << std::endl << std::endl;

    std::cout << "!= comparaison" << std::endl;
    std::cout << (Fixed(6) != Fixed(5) ? "true" : "false") << std::endl;
    std::cout << (Fixed(5) != Fixed(5) ? "true" : "false") << std::endl << std::endl;

    std::cout << "+, -, *, / operations" << std::endl;
    std::cout << Fixed(0.5f) + Fixed(0.375f) << std::endl;
    std::cout << Fixed(0.5f) - Fixed(0.375f) << std::endl;
    std::cout << Fixed(0.5f) * Fixed(0.375f) << std::endl;
    std::cout << Fixed(0.5f) / Fixed(0.375f) << std::endl;
    std::cout << Fixed(0.5f) / Fixed(0) << std::endl << std::endl;

    std::cout << "increment/decrement operators" << std::endl;
    std::cout << a << std::endl;
    ++a;
    std::cout << a << std::endl;
    a++;
    std::cout << a << std::endl;
    --a;
    std::cout << a << std::endl;
    a--;
    std::cout << a << std::endl << std::endl;


    std::cout << "min/max methods" << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << Fixed::max(Fixed(11), b) << std::endl;
    std::cout << Fixed::min( a, b ) << std::endl;
    std::cout << Fixed::min(Fixed(11), b) << std::endl;

    return 0;
}

// make a good main of tests