#include <unistd.h>
#include <stdlib.h>

char *ft_strdup(char *str, int size)
{
	if (size < 0)
		return (NULL);
	char *res = (char *) malloc(sizeof(char) * (size + 1));
	int i = 0;
	if (res == NULL)
		return (NULL);
	while (str[i] && i <= size)
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char *ft_strtok(char *str, char *sep)
{
	int i = 0;
	int j = 0;
	int x = 0;
	char *res;
	while (str[i])
	{
		j = 0;
		x = i;
		while(sep[j] == str[i] && sep[j] != '\0')
		{
			j++;
			i++;
		}
		if (sep[j] == '\0')
		{
			x--;
			break;
		}
		i++;
	}
	res = ft_strdup(str, x);
	return (res);
}

/*int main(int ac, char *av[])
{
	if (ac == 3)
	{
		char *res = ft_strtok(av[1], av[2]);
		int  i = 0;
		while (res[i])
		{
			write(1, &res[i], 1);
			i++;
		}
		free(res);
	}
	write(1, "\n", 1);
	return 0;
}*/
