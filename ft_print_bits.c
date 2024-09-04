#include <unistd.h>

void ft_print_bits(unsigned char byte)
{
	int i = 7;
	int r;
	while (i >= 0)
	{
		r = (byte & (1 << i)) ? '1' : '0';
		write(1, &r, 1);
		i--;
	}
}

/*int main(int ac, char **av)
{
	if (ac == 2 && av[1][1] == '\0')
	{
		ft_print_bits(av[1][0]);
	}
	write(1, "\n", 1);
}*/
