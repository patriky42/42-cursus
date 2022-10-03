/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushprueba.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:35:41 by pabastid          #+#    #+#             */
/*   Updated: 2022/08/23 10:41:48 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush00(int x, int y);
{
		if  ((cont1 == 1 && cont2 == 1) || (cont1 == n1 && cont2 == n2))
                  ft_putchar('/');
              else if ((cont1 == 1 && cont2 == n2) || (cont2 == 1 && cont1 == n1))
                  ft_putchar(92);
              else if (cont1 == 1 || cont1 == n1 || cont2 == 1 || cont2 == n2)
                  ft_putchar('*');
              else
                  ft_putchar(' ');
                  cont1++;
				  {
            ft_putchar('\n');
              cont2++;
				  }
}
void	rush01(int x, int y)
{
	int	cont1;
	int	cont2;
	int	n1;
	int	n2;

	cont2 = 1;
	n1 = x;
	n2 = y;
	while (cont2 <= n2)
	{
		cont1 = 1;
		while (cont1 <= n1)
		{
		void	rush00(int c, int y);		
		}
	}	
}

int	main(void)
{
	rush01(5, 5);
}
