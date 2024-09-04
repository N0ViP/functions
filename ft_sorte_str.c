#include <unistd.h>

char *ft_sorte_str(char *str)
{
	int i = 0;
	int j;
	char c;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] - str[j] > 0)
			{
				c = str[i];
				str[i] = str[j];
				str[j] = c;
			}
			j++;
		}
		i++;
	}
	return (str);
}
