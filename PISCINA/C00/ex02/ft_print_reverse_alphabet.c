/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:48:00 by pabastid          #+#    #+#             */
/*   Updated: 2022/08/21 17:51:54 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	alfabeto;

	alfabeto = 'z';
	while (alfabeto >= 'a')
	{
		ft_putchar(alfabeto);
		alfabeto--;
	}
}

int main( void) 
{
	ft_print_reverse_alphabet();
	return (0);
}
