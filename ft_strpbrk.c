#include <unistd.h>

char *ft_strpbrk(char *str, char *list)
{
	int i = 0;
	int j = 0;
	while (str[i])
	{
		j = 0;
		while (list[j])
		{
			if (str[i] == list[j])
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*int main(int ac, char *av[])
{
	if (ac == 3)
	{
		char *res = ft_strpbrk(av[1], av[2]);
		int i = 0;
		while (res[i])
		{
			write(1, &res[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}*/
