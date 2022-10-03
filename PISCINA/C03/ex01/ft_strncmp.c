/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:50:34 by pabastid          #+#    #+#             */
/*   Updated: 2022/08/28 17:00:59 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *ca, char *cb)
{
	unsigned int	i;

	i = 0;
	while ((ca[i] != '\0' || cb[i] != '\0') && i < n)
	{
		if (ca[i] > cb[i])
		{
			return (1);
		}
		else if (ca[i] < cb[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
