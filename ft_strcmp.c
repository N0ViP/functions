#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

/*void ft_putnbr(int n)
{
	char res[9];
	int i = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n == 0)
		write(1, "0" , 1);
	else
	{
		while (n > 0)
		{
			res[i] = (n % 10) + 48;
			n /= 10;
			i++;
		}
		i--;
		while (i >= 0)
		{
			write(1, &res[i], 1);
			i--;
		}
	}
}

int main(int ac, char *av[])
{
	if (ac == 3)
	{
		int res = ft_strcmp(av[1], av[2]);
		ft_putnbr(res);
	}
	write(1, "\n", 1);
	return (1);
}*/
