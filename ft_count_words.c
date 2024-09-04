int ft_check(char *c, char *sep)
{
	int i = 0;
	while (sep[i] && sep[i] == c[i])
	{
		i++;
	}
	if (sep[i])
		return (0);
	else
		return (1);
}

int ft_strlen(char *sep)
{
	int i = 0;
	while (sep[i])
		i++;
	return (i);
}

int ft_count_words(char *str, char *sep)
{
	int len = ft_strlen(sep);
	int i = 0;
	int cnt = 0;
	while (str[i])
	{
		while (str[i] && ft_check(str + i, sep))
			i += len;
		if (str[i])
			cnt++;
		while (str[i] && !(ft_check(str + i, sep)))
			i++;
	}
	return (cnt);
}
