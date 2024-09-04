#include <stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strcpy(char *dest, char *src)
{
	int i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strdup(char *src)
{
	int size = ft_strlen(src);
	char *res = (char *) malloc(sizeof(char) * (size + 1));
	if (res == NULL)
	{
		res = (char *) malloc(1);
		*res = '\0';
	}
	else
		res = ft_strcpy(res, src);
	return (res);
}
