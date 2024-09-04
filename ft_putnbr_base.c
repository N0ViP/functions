#include <unistd.h>

int ft_strlen_check_base(char *base)
{
	int i = 0;
	int j;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == 45 || base[i] == 43 || base[i] <= 32)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void ft_putnbr_base(int n, char *base)
{
	int i = 0;
	char arr[31];
	int base_s = ft_strlen_check_base(base);
	if (base_s == 0)
		return;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	else if (n == 0)
	{
		write(1, &base[0], 1);
		return;
	}
	while (n > 0)
	{
		arr[i] = base[n % base_s];
		n /= base_s;
		i++;
	}
	while (i >= 0)
	{
		write(1, &arr[i], 1);
		i--;
	}
}

/*int main()
{
	ft_putnbr_base(1337, "01");
}*/
