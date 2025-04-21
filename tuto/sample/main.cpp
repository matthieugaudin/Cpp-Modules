#include <iostream>
#include "Sample.hpp"

int main(void)
{

    Sample instance1(13.4, 19.36);
    Sample instance2(25, 19.34532);
    Sample *instancep = &instance2;

    instance1.bar();
    instance1.foo = 42;
    // instance1._foo = 42;

    std::cout << "_foo value : " << instance1.getFoo() << std::endl;
    instance1.setFoo(42);
    std::cout << "_foo value : " << instance1.getFoo() << std::endl;
    instance1.setFoo(-42);
    std::cout << "_foo value : " << instance1.getFoo() << std::endl;

    std::cout << "nbInst : " << Sample::getNbInst() << std::endl;



    /*pointers*/
    int     Sample::*foo_p = NULL;
    void    (Sample::*bar_ptr)(void) const;

    foo_p = &Sample::foo;
    std::cout << "foo value : " << instance2.foo << std::endl;
    instance2.*foo_p = 21;
    std::cout << "foo value : " << instance2.foo << std::endl;
    instancep->*foo_p = 22;
    std::cout << "foo value : " << instance2.foo << std::endl;

    bar_ptr = &Sample::bar;
    (instance2.*bar_ptr)();
    (instancep->*bar_ptr)();
    return 0;
}
