#include <stdio.h>

int	ft_strlen (char	*str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char	str[] = "hola";
	ft_strlen(str);
	printf("%d", ft_strlen(str));
	return (0);
}
