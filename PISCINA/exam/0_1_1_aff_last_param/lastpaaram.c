#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argc > 1)
		{



