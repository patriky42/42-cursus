/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:42:16 by pabastid          #+#    #+#             */
/*   Updated: 2022/08/28 18:01:32 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *ca, char *cb)
{
	unsigned int	i;

	i = 0;
	while (ca[i] == cb[i] && (ca[i] != '\0' || cb[i] != '\0'))
	{
		i++;
	}
	return (ca[i] - cb[i]);
}