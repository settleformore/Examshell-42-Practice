#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + 48);
}

int main(int argc, char **argv)
{
	ft_putnbr(argc - 1);
	(void)argv;
	write(1, "\n", 1);
}
