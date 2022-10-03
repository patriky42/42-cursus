/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 10:11:24 by pabastid          #+#    #+#             */
/*   Updated: 2022/08/24 14:58:51 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	posmin;
	int	z;

	i = 0;
	while (i < size)
	{
		tab[posmin] = i;
		j = i + 1;
		while (j < size)
		{
			if (tab [posmin] > tab [j])
			{
				z = posmin;
				posmin = tab[j];
				tab[j] = z;
			}
		j++;
		}
		tab[i] = posmin;
		i++;
	}
}
