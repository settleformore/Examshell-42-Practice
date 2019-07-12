#include <unistd.h>
// #include <stdio.h>

void ft_putstr(char *str)
{
    int i;

    i = -1;
    while (str[++i] != '\0')
        write(1, &str[i], 1);
        write(1, "\n", 1);
}

// int main(){
//     // puts("hi there");
//     ft_putstr("hi there");
// }
