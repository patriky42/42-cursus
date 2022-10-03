/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:56:27 by pabastid          #+#    #+#             */
/*   Updated: 2022/08/25 11:29:59 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	z;
	int	i;
	int	j;

	i = 0;
	j = size -1;
	while (i < (size / 2))
	{
		z = tab [i];
		tab [i] = tab [j];
		tab [j] = z;
		i++;
		j--;
	}
}
