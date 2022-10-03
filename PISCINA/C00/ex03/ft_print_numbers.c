/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:25:42 by pabastid          #+#    #+#             */
/*   Updated: 2022/08/26 12:43:28 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{	
	write (1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	numeros;

	numeros = '0';
	while (numeros <= '9')
	{
		ft_putchar(numeros);
		numeros++;
	}
}
