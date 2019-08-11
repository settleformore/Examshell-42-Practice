#include <unistd.h>

void		ft_putchar(int c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	if (str)
		while (*str)
			ft_putchar(*str++);
}

int			main(void)
{
	int		i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			ft_putstr("fizzbuzz");
		else if (i % 3 == 0)
			ft_putstr("fizz");
		else if (i % 5 == 0)
			ft_putstr("buzz");
		else
		{
			if (i < 10)
				ft_putchar(48 + i);
			else
			{
				ft_putchar(48 + (i / 10));
				ft_putchar(48 + (i % 10));
			}
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}

