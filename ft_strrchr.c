#include <unistd.h>

char *ft_strrchr(char *str, char c)
{
	int i = 0;
	int x = 0;
	int con = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			con = 1;
			x = i;
		}
		i++;
	}
	if (con == 1)
		return (&str[x]);
	return (NULL);
}

/*int main(int ac, char *av[])
{
	if (ac == 3 && av[2][1] == '\0')
	{
		char *res = ft_strrchr(av[1], av[2][0]);
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
