int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return(i);
}

char *ft_strdup(char *src)
{
	int i = -1;
	char *new;

	if (new = (char*)malloc(ft_strlen(src) + 1);
		return (NULL);
	while(str[++i])
		new[i] = src[i];
	new[i] = '\0';
	return(new);
}
