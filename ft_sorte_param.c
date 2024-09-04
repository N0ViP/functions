int ft_strlen(char **param)
{
	int i = 0;
	while (param[i])
		i++;
	return (i);
}

int ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

char **ft_sorte_param(char **param)
{
	int i = 0;
	int j = 0;
	int s = ft_strlen(param);
	while (i < s - 1)
	{
		j = i + 1;
		while (param[j])
		{
			if (ft_strcmp(param[i], param[j]) > 0)
			{
				char *r;
				r = param[i];
				param[i] = param[j];
				param[j] = r;
			}
			j++;
		}
		i++;
	}
	return (param);
}

/*void ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		av = ft_sorte_param(av);
		int i = 0;
		av++;
		while (av[i])
		{
			ft_putstr(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	write(1, "\n", 1);
}*/
