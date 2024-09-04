#include <unistd.h>

unsigned char ft_reverse_bits(unsigned char byte)
{
	int i = 0;
	unsigned char a = 0;
	while (i <= 7)
	{
		a <<= 1;
		a = a | (byte & 1);
		byte >>= 1;
		i++;
	}
	return (a);
}
