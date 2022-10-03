#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc < 2) /*esto es cuando solo hay un argumento?*/
	{
		write(1, "\n", 1);
		return (0); /* porque se pone eel return?*/
	}
	else /*se pone el else?*/
		while (argv[argc - 1][i] != '\0')
		{
			write(1, &argv[argc - 1][i], 1);
			i++;
		}
	write(1, "\n", 1);
	return (0);
}
