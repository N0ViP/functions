int ft_strlen_check_base(char *base)
{
	int i = 0;
	int j;
	if (base[i] == '\0' || base[i + 1] == '\0')
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

int ft_check_position(char c, char *base)
{
	int i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int ft_atoi_base(char *nbr, char *base)
{
	int b_size = ft_strlen_check_base(base);
	if (b_size == 0)
		return(0);
	short sign = 1;
	int res = 0;
	int i = 0;
	while ((nbr[i] == 32 || (nbr[i] >= 9 && nbr[i] <= 13)) && nbr[i])
	{
		i++;
	}
	while ((nbr[i] == 45 || nbr[i] == 43) && nbr[i])
	{
		if (nbr[i] == 45)
			sign *= -1;
		i++;
	}
	while (nbr[i] && ft_check_position(nbr[i], base) != -1)
	{
		int a = ft_check_position(nbr[i], base);
		res = (res * b_size) + a;
		i++;
	}
	return (res * sign);
}
