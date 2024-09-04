int ft_atoi(char *str)
{
	short sign = 1;
	int res = 0;
	while ((*str == 32 || (*str >= 9 && *str <= 13)) && *str)
		str++;
	while ((*str == 45 || *str == 43) && *str)
	{
		if (*str == 45)
			sign *= -1;
		str++;
	}
	while ((*str >= 48 && *str <= 57) && *str)
	{
		res = (res * 10) + (*str - 48);
		str++;
	}
	return (res * sign);
}
