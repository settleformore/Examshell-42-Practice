#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int upper = 0;

	i = -1;
	if (argc == 2)
	{
		while (argv[1][++i])
		{
			upper = 0;
			if (argv[1][i] == '_')
			{
				i++;
				upper++;
			}
			if (upper)
			{
				argv[1][i] -= 32;		
				write(1, &argv[1][i], 1);
			}
			else
				write(1, &argv[1][i], 1);
		}
	}
	write(1, "\n", 1);
}
