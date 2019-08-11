#include <unistd.h>

int ft_strlen(char str)
{
    int i;

     i = 0;
    while(str[i] != '\0')
        i++;
    return(i);
}

int ft_isspace(char str)
{
    return (str == '\t' || str == '\n' || str == '\v' || str == '\f'|| str == '\r' || str == ' ' ? 1 : 0);
}

int main(int argc, char **argv)
{
    int i;
    
    i = 0;
    if (argc == 2)
    {
        i++;
        while (ft_isspace(argv[1][i]))
            i++;
        while (argv[1][i] && !ft_isspace(argv[1][i]))
                write(1, &argv[1][i], 1);
    }
    write(1, "\n", 1);
    return (0);
}