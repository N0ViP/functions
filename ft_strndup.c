#include <stdlib.h>

unsigned int ft_strlen(char *str)
{
	unsigned int i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strndup(char *str, unsigned int n)
{
	unsigned int size = ft_strlen(str);
	unsigned int t_s = n + 1;		//total size
	if (n > size)
		t_s = size + 1;
	char *res = (char *) malloc(sizeof(char) * t_s);
	if (res == NULL)
	{
		res = (char *) malloc(1);
		*res = '\0';
	}
	else
		res = ft_strncpy(res, str, n);
	return (res);
}
