#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char *ft_strcat(char *res, char *str)
{
	int i = 0;
	int j = 0;
	while (res[i])
		i++;
	while (str[j])
	{
		res[i] = str[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}

char *ft_strjoin(char **str, char *sep, int size)
{
	char *res;
	int i = 1;
	int total_size = 0;
	while (i < size)
	{
		total_size += ft_strlen(str[i]);
		if (i < size - 1)
			total_size += ft_strlen(sep);
		i++;
	}
	res = (char *) malloc(sizeof(char) * (total_size + 1));
	if (res == NULL)
		return (NULL);
	i = 1;
	while (i < size)
	{
		res = ft_strcat(res, str[i]);
		if (i < size - 1)
			res = ft_strcat(res, sep);
		i++;
	}
	return (res);
}

/*int main(int ac, char *av[])
{
	if (ac > 1)
	{
		char *res = ft_strjoin(av, " UwU ", ac);
		int i = 0;
		while (res[i])
		{
			write(1, &res[i], 1);
			i++;
		}
		free(res);
	}
	write(1, "\n", 1);
}*/
