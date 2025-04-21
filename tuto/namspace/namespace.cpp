#include <stdio.h>
#include <iostream>

int	gl_var = 1;
int	f(void) { return 2; }

namespace	Foo 
{
	int	gl_var = 3;
	int	f(void) { return 4; }
}

namespace	Bar 
{
	int	gl_var = 5;
	int	f(void) { return 6; }
}

namespace	Muf = Foo;

int main(void) {
	char	buffer[256];
	printf("::gl_var:	%d\n", gl_var);
	printf("::f():	%d\n", f());

	printf("Foo::gl_var:	%d\n", Foo::gl_var);
	printf("Foo::f():	%d\n", Foo::f());

	printf("Muf::gl_var:	%d\n", Muf::gl_var);
	printf("Muf::f():	%d\n", Muf::f());

	printf("Bar::gl_var:	%d\n", Bar::gl_var);
	printf("Bar::f():	%d\n", Bar::f());

	std::cout << "Hello Word !" << std::endl;
	std::cout << "Enter something : ";
	std::cin >> buffer;
	std::cout << "Your entered : [ " << buffer << " ]" << std::endl;
}
