#include "Integer.hpp"

int main(void)
{
    Integer i(3);
    Integer a(5);
    Integer b(7);

    std::cout << i.getValue() << std::endl;
    i = a;
    std::cout << i.getValue() << std::endl;
    i = a = b = i = b + Integer(8);
    std::cout << i.getValue() << std::endl;
    std::cout << i << i;
}