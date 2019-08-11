#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	int i;
	
	while (*s1 != '\0')
	{
		i = -1;
		while (s2[++i])
		{
			if (*s1 == s2[i])
				return ((char *) s1);
		}
		s1++;	
	}
	return(NULL);
}

int main()
{
	char *ret;
	char *another;
	const char str1 [] = "this is 4 thing";
	const char str2 [] = "34";
	ret = strpbrk(str1, str2);
	another = ft_strpbrk(str1, str2);

	printf("%c\n", *ret);
	printf("%c\n", *another);
}
