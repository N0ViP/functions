int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_rev_str(char *str)
{
	int len = ft_strlen(str) - 1;
	int i = 0;
	char c;
	while (i < len)
	{
		c = str[i];
		str[i] = str[len];
		str[len] = c;
		len--;
		i++;
	}
	return (str);
}
