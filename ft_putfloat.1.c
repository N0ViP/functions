#include <unistd.h>

int cnt(float nb)
{
	int n = nb;
	if (n < 0)
		n = -n;
	int i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void ft_putfloat(float nb, int cnt)
{
	long long n = nb * 1000000;
	int r[20];
	int i = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	else if (n == 0)
		write(1, "0.000000", 8);
	while (n > 0)
	{
		r[i] = n % 10;
		n /= 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		if (cnt == 0)
			write(1, ".", 1);
		r[i] += 48;
		write(1, &r[i], 1);
		i--;
		cnt--;
	}
}

void res(float n)
{
	int a = cnt(n);
	ft_putfloat(n, a);
}

/*int main()
{
	float x = -1337;
	res(x);
}*/
