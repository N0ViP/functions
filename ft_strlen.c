#include <unistd.h>

int ft_strlen(char *str)
{
        int i = 0;
        while (str[i])
        {
                i++;
        }
        return (i);
}

/*void ft_putnbr(int nb)
{
	int n;
	if (nb == 0)
		write(1, "0", 1);
	else
	{
		if (nb >= 9)
			ft_putnbr(nb / 10);
		n = (nb % 10) + 48;
		write(1, &n, 1);
	}
}

int main(int ac, char *av[])
{
	if (ac == 2)
	{
		int len = ft_strlen(av[1]);
		ft_putnbr(len);
	}
	write(1, "\n", 1);
}*/
