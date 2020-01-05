#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void num(char c)
{
	int i = c;
	if (i >= 'a' && i <= 'z')
		i = i - 96;
	if (i >= 'A' && i <= 'Z')
		i = i - 64;
	while (i--)
		ft_putchar(c);
}

void repeat(char *str)
{
	int i = -1;

	while(str[++i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			num(str[i]);
		}
		else
			ft_putchar(str[i]);
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		repeat(argv[1]);
	}
	write(1, "\n", 1);	
}
