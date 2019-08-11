#include <unistd.h>

int		ft_times(char c)
{
	if ( c >= 'a' && c <= 'z')
		return(c - 96);
	if (c >= 'A' && c <= 'Z')
		return(c - 64);
	return(1);
}

void	ft_multiwrite(char str)
{
	int k;
	k = -1;

	while(++k < ft_times(str))
		write(1, &str, 1);			
}

int main(int argc, char **argv)
{
	int i;

	i = -1;
	if (argc == 2)
		while(argv[1][++i])
			ft_multiwrite(argv[1][i]);
	write(1, "\n", 1);
}
