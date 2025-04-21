#include <iostream>

int main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				if (('A' <= argv[i][j] && argv[i][j] <= 'Z')
					|| ('a' <= argv[i][j] && argv[i][j] <= 'z'))
					std::cout << argv[i][j] -32; // to convert
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
}

// what function can i use form std ? (see discord)
// understand for loop
// 