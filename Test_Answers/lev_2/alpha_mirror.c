#include <unistd.h>

// abcdefghijklmnopqrstuvwzyx
// SAME GOES FOR THE UPPER
// abcd -> wzyx

void ft_putchar(char c)
{
    write(1, &c, 1);
}

char ft_alpha_m(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            ft_putchar('Z' - str[i] + 'A');
        else if (str[i] >= 'a' && str[i] <= 'z')
            ft_putchar('z' - str[i] + 'a');
        else
            ft_putchar(str[i]);
        i++;
    }
    return(*str);
}

int main(int argc, char **argv)
{
    if (argc == 2)
        ft_alpha_m(argv[1]);
    write(1, "\n", 1);
}