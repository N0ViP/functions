#include <unistd.h>

unsigned char ft_swap_bits(unsigned char byte)
{
	unsigned char left_part = byte & 0B11110000;
	unsigned char right_part = byte & 0B00001111;
	left_part >>= 4;
	right_part <<= 4;
	return (left_part | right_part);
}
