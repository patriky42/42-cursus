/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:08:40 by pabastid          #+#    #+#             */
/*   Updated: 2022/08/28 17:38:51 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_number(char *str, int cont)
{
	if ((str[cont] < '0') || (str[cont] > '9'))
		return (0);
	else
		return (1);
}

int	ft_is_lwcase(char *str, int cont)
{
	if ((str[cont] >= 'a') && (str[cont] <= 'z'))
		return (1);
	else
		return (0);
}

int	ft_is_upcase(char *str, int cont)
{
	if ((str[cont] >= 'A') && (str[cont] <= 'Z'))
		return (1);
	else
		return (0);
}

int	num_ant(char *str, int cont)
{
	int	i;

	i = cont - 1;
	if (ft_is_number(str, i) || ft_is_lwcase(str, i) || ft_is_upcase(str, i))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont])
	{
		if (cont == 0 && ft_is_lwcase(str, cont))
			str[cont] -= 32;
		else if (!num_ant(str, cont) && ft_is_lwcase(str, cont))
			str[cont] -= 32;
		else if (num_ant(str, cont) && ft_is_upcase(str, cont))
			str[cont] += 32;
		cont++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str1[] = "salut, comment tu Vas ? 42Mots quarRnte-Deux; cinquante+et+un";
	char	str2[] = "salut, comment tu vas?";
	
	
	printf("ANTES: %s", str1);
	printf("\nDESPUES: %s", ft_strcapitalize(str1));
	printf("\nANTES : %s", str2);
	printf("\nDESPUES : %s\n", ft_strcapitalize(str2));
	return (0);
}*/
