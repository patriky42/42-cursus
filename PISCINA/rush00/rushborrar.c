#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}




void	rush01(int x, int y)
{
	int	cont1;
	int	cont2;

	cont2 = 1;
		while (cont2 <= y)
	{
		cont1 = 1;
		while (cont1 <= x)
		{
			if ((cont1 == 1 && cont2 == 1) || (cont1 == x && cont2 == y))
				ft_putchar('/');
			else if ((cont1 == 1 && cont2 == y) || (cont2 == 1 && cont1 == x))
				ft_putchar(92);
			else if (cont1 == 1 || cont1 == x || cont2 == 1 || cont2 == y)
				ft_putchar('*');
			else {
			ft_putchar(' ');
			}
			cont1++;
		}
				ft_putchar('\n');
				cont2++;
			}	
}

int	main(void)
{
rush01(5, 5);
}
