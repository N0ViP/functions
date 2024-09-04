#include <stdlib.h> // for malloc

short ft_n_size(int n)
{
	int i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	else if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void ft_rev_str(char *str, int len)
{
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
}

char *ft_itoa(int n)
{
	int i = 0;
	int sign = 1;
	short n_s = ft_n_size(n);
	char *res = (char *) malloc(sizeof(char) * (n_s + 10));
	if (res == NULL)
		return (NULL);
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	else if (n == 0)
	{
		res[0] = 48;
		res[1] = '\0';
		return (res);
	}
	while (n > 0)
	{
		res[i] = (n % 10 ) + 48;
		i++;
		n /= 10;
	}
	if (sign == -1)
	{
		res[i] = '-';
		i++;
	}
	res[i] = '\0';
	ft_rev_str(res, (i - 1));
	return (res);
}
