#include <unistd.h>

void ft_putint(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	else if (nb == 0)
		write(1, "0", 1);
	if (nb > 0)
	{
		if (nb <= 9)
		{
			nb += 48;
			write(1, &nb, 1);
		}
		else
		{
			ft_putint(nb / 10);
			int x = (nb % 10) + 48;
			write(1, &x, 1);
		}

	}
}
