char *ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
