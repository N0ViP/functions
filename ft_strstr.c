#include <unistd.h>

char *ft_strstr(char *str, char *to_find)
{
	int i = 0;
	int j = 0;
	int x = 0;
	while (str[i])
	{
		j = 0;
		x = i;
		while (str[x] == to_find[j])
		{
			x++;
			j++;
		}
		if (!(to_find[j]))
			return (&str[i]);
		i++;
	}
	return (NULL);
}

/*int main(int ac, char *av[])
{
	if (ac == 3)
	{
		char *res = ft_strstr(av[1], av[2]);
		int i = 0;
		while (res[i])
		{
			write(1, &res[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (1);
}*/
