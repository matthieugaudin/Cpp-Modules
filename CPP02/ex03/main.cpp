#include "Point.hpp"

int main(void)
{
    // Inside
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(2, 1)) << std::endl;
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(2, 2)) << std::endl;
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(1, 1)) << std::endl << std::endl;

    // Outside
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(-1, -1)) << std::endl;
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(5, 1)) << std::endl;
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(2, 5)) << std::endl << std::endl;

    // On edges
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(2.0, 0.01)) << std::endl; // inside
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(2.0, -0.01)) << std::endl;
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(2, 0)) << std::endl;
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(1, 2)) << std::endl;
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(3, 2)) << std::endl << std::endl;

    // On vertices
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(0.01, 0.01)) << std::endl;
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(0.01, -0.01)) << std::endl;
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(0, 0)) << std::endl;
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(4, 0)) << std::endl;
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(2, 4)) << std::endl << std::endl;
}
