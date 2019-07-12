#include <unistd.h>

size_t ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

int main(int argc, char **argv)
{
    int i;

    i = -1;
    if (argc == 4 && ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
    {
        while(argv[1][++i])
        {
            if (argv[1][i] == argv[2][0])
                write(1, &argv[3][0], 1);
            if (argv[1][i] != argv[2][0])
                write(1, &argv[1][i], 1);
        }
    }
    write(1, "\n", 1);
}