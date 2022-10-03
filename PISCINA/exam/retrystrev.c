#include <unistd.h>

int	ft_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	ft_strev(char *str)
{
	int i;

	i = ft_len(str) - 1;
	while (str[i] != '\0')
	{
		write(1, str[i], 1);
		i--;
	}
	return (str);
}
