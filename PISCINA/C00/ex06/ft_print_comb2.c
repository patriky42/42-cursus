/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:51:33 by pabastid          #+#    #+#             */
/*   Updated: 2022/08/21 17:57:15 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_numbers(int n1, int n2)
{
	char	c1;
	char	c2;

	c1 = 0;
	c2 = 1;
	c1 = (n1 - (n1 % 10)) / 10 + '0';
	c2 = (n1 % 10) + '0';
	ft_putchar(c1);
	ft_putchar(c2);
	ft_putchar(' ');
	c1 = (n2 - (n2 % 10)) / 10 + '0';
	c2 = (n2 % 10) + '0';
	ft_putchar(c1);
	ft_putchar(c2);
	if (n1 != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	n2 = 1;
	while (n1 <= 98)
	{
		while (n2 <= 99)
		{
			ft_numbers(n1, n2);
			n2++;
		}
		n1++;
		n2 = n1 + 1;
	}
}

int main( void)
{
	ft_print_comb2();
	return (0);
 }
