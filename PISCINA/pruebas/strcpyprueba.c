#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	destino[5];
	char	origen[] = "bamos";

	ft_strcpy(destino, origen);
	printf("%s", destino);
	return (0);
}


