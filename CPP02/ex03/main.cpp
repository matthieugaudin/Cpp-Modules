#include "Point.hpp"

int main(void)
{
    std::cout << "Inside Points : " << std::endl;
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(2, 1)) << std::endl;
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(2, 2)) << std::endl;
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(1, 1)) << std::endl << std::endl;

    std::cout << "Outside Points : " << std::endl;
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(-1, -1)) << std::endl;
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(5, 1)) << std::endl;
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(2, 5)) << std::endl << std::endl;

    std::cout << "Edge Points / Close to it : " << std::endl;
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(2.0, 0.01)) << std::endl;
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(2.0, -0.01)) << std::endl;
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(2, 0)) << std::endl;
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(1, 2)) << std::endl;
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(3, 2)) << std::endl << std::endl;

    std::cout << "Vertex Points / Close to it : " << std::endl;
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(0.01, 0.01)) << std::endl;
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(0.01, -0.01)) << std::endl;
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(0, 0)) << std::endl;
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(4, 0)) << std::endl;
    std::cout << bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(2, 4)) << std::endl << std::endl;
}
