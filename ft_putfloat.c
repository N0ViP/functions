#include <unistd.h>

int ft_count(float nb)
{
	int n = nb;
	int i = 1;
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n /= 10;
		i *= 10;
	}
	return (i);
}

long long change_type(float n)
{
	return (n * 1000000);
}

void res(long long n, int cnt)
{
	if (n == 0)
		write(1, "0.000000", 8);
	else if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 0)
	{
		if (n > 9)
			res(n / 10, cnt);
		short x = (n % 10) + 48;
		write(1, &x, 1);
		if (n < cnt && n >= (cnt / 10))
			write(1, ".", 1);
	}
}

void ft_putfloat(float n)
{
	int cnt = ft_count(n);
	long long nb = change_type(n);
	res(nb, cnt);
}

/*int main()
{
	ft_putfloat(1337);
}*/
