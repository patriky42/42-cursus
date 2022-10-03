/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aripoll- <aripoll-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 12:52:18 by aripoll-          #+#    #+#             */
/*   Updated: 2022/08/14 15:18:11 by aripoll-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

void	ft_body(int largo)
{
	int	c1;

	c1 = 1;
	ft_putchar('*');
	while (c1 < largo - 1)
	{
		ft_putchar(' ');
		c1++;
	}
	if (largo > 1)
	{
		ft_putchar('*');
	}
}

void	ft_up(int largo)
{
	int	c1;

	c1 = 1;
	ft_putchar('/');
	while (c1 < largo - 1)
	{
		ft_putchar('*');
		c1++;
	}
	if (largo > 1)
	{
		ft_putchar(92);
	}
}

void	ft_down(int largo)
{
	int	c1;

	c1 = 1;
	ft_putchar(92);
	while (c1 < largo - 1)
	{
		ft_putchar('*');
		c1++;
	}
	if (largo > 1)
	{
		ft_putchar('/');
	}
}

void	rush01(int x, int y)
{
	int	cx;
	int	cy;

	cx = 1;
	cy = 2;
	ft_up(x);
	if (y > 1)
	{
		ft_putchar('\n');
	}
	while (cy < y)
	{
		ft_body(x);
		ft_putchar('\n');
		cy++;
	}
	if (y > 1)
	{
		ft_down(x);
	}
	ft_putchar('\n');
}
