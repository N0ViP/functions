#include <unistd.h>

char *ft_strchr(char *str, char c)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

/*int main(int ac, char *av[])
{
	if (ac == 3 &&av[2][1] == '\0')
	{
		char *res = ft_strchr(av[1], av[2][0]);
		int i = 0;
		while (res[i])
		{
			write(1, &res[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}*/
