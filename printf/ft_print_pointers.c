/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:54:32 by pabastid          #+#    #+#             */
/*   Updated: 2022/10/21 17:06:00 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa_lower(unsigned long long hexa, int counter)
{
	char	*base;

	base = "0123456789abcdef";
	if (hexa > 15)
	{
		counter = ft_print_hexa_lower(hexa / 16, counter);
		if (counter == -1)
			return (-1);
	}
	if (ft_print_char(base[hexa % 16]) == -1)
		return (-1);
	return (counter + 1);
}

int	ft_print_pointers(void *ptr)
{
	int	counter;

	counter = ft_print_str("0x");
	if (counter == -1)
		return (-1);
	counter = ft_print_hexa_lower((unsigned long long)ptr, counter);
	return (counter);
}
