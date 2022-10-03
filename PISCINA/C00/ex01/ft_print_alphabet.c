/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 09:46:36 by pabastid          #+#    #+#             */
/*   Updated: 2022/08/26 12:35:43 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	alfabeto;

	alfabeto = 'a';
	while (alfabeto <= 'z')
	{
		ft_putchar (alfabeto);
		alfabeto++;
	}
}
