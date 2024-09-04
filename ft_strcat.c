char *ft_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
        while (dest[i])
                i++;
        while (src[j])
        {
                dest[i] = src[j];
                i++;
                j++;
        }
        dest[i] = '\0';
        return (dest);
}

/*int main(int ac, char *av[])
{
	if (ac == 3)
	{
		char *res = ft_strcat(av[1], av[2]);
		while (*res)
		{
			write(1, res, 1);
			res++;
		}
	}
	write(1, "\n", 1);
}*/
