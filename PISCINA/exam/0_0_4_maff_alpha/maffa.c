#include <unistd.h>

int	main(void)
{
	char	min;
	char	may;

	min = 'a';
	may = 'B';
	while (min <= 'y')
	{
		while (may <= 'Z')
		{
			write(1, &min, 1);
			write(1, &may, 1);
			min += 2;
			may += 2;
		}
		write(1, "\n", 1);
	}
	return (0);
}
