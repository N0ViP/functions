#include <stdlib.h>

short ft_strlen_check_base(char *base)
{
	int i = 0;
	int j;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
		       	if (base[j] <= 32 || base[j] == 45 || base[j] == 43 || base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

short ft_size(long long n, int b_len)
{
	int i = 0;
	if (n < 0)
	{
		n = -n;
		i++;		// i++ for the '-' character
	}
	while (n > 0)
	{
		n /= b_len;
		i++;
	}
	return (i);
}

char *ft_rev_str(char *str, int len)
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
	return (str);
}

char *ft_lltoa_base(long long n, char *base)
{
	short b_len = ft_strlen_check_base(base);
	short size = ft_size(n, b_len);
	int i = 0;
	short sign = 1;
	char *res = (char *) malloc(sizeof(char) * (size + 1));
	if (b_len == 0 || res == NULL)
		return (NULL);
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	else if (n == 0)
	{
		res[0] = base[0];
		res[1] = '\0';
	}
	while (n > 0)
	{
		res[i] = base[n % b_len];
		n /= b_len;
		i++;
	}
	if (sign == -1)
	{
		res[i] = '-';
		i++;
	}
	res[i] = '\0';
	i--;
	res = ft_rev_str(res, i);
	return (res);
}
