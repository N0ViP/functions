#include <stdlib.h>

int ft_check(char *str, char *sep)
{
	int i = 0;
	while (str[i] && sep[i] == str[i])
		i++;
	if (sep[i])
		return (0);
	return (1);
}

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int ft_cnt_str(char *str, char *sep)
{
	int i = 0;
	int cnt = 0;
	int s_len = ft_strlen(sep);
	while (str[i])
	{
		while (str[i] && ft_check(str + i, sep))
			i += s_len;
		if (str[i])
			cnt++;
		while (str[i] && !(ft_check(str + i, sep)))
			i++;
	}
	return (cnt);
}

char **ft_split(char *str, char *sep)
{
	int cnt_str = ft_cnt_str(str, sep);
	char **res = (char **) malloc(sizeof(char *) * (cnt_str + 1));
	if (res == NULL)
		return (NULL);
	int i = 0;
	int j = 0;
	int k = 0;
	int s_len = ft_strlen(sep);
	int cnt_words;
	while (str[i])
	{
		cnt_words = 0;
		while (str[i] && ft_check(str + i, sep))
			i += s_len;
		while (str[i] && !(ft_check(str + i, sep)))
		{
			i++;
			cnt_words++;
		}
		if (cnt_words != 0)
		{
			res[j] = (char *) malloc(sizeof(char) * (cnt_words + 1));
			if (res[j] == NULL)
				return (NULL);
			j++;
		}
	}
	i = 0;
	j = 0;
	while (str[i])
	{
		k = 0;
		while (str[i] && ft_check(str + i, sep))
			i += s_len;
		if (str[i] == '\0')
			break;
		while (str[i] && !(ft_check(str + i, sep)))
		{
			res[j][k] = str[i];
			i++;
			k++;
		}
		res[j][k] = '\0';
		j++;
	}
	res[j] = NULL;
	return (res);
}

/*#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 3)
	{
		char **res = ft_split(av[1], av[2]);
		int i = 0;
		int j = 0;
		while (res[i])
		{
			j = 0;
			while (res[i][j])
			{
				write(1, &res[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
		free(res);
	}
	write(1, "\n", 1);
}*/
