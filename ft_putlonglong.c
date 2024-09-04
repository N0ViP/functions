#include <unistd.h>

void ft_putlonglong(long long nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	else if (nb == 0)
		write(1, "0", 1);
	if (nb > 0)
	{
		if (nb >= 9)
			ft_putlonglong(nb / 10);
		short x = (nb % 10) + 48;
		write(1, &x, 1);
	}
}
