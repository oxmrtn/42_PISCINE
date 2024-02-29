/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:09:32 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/08 18:13:23 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_aff(char m, char t)
{
	write(1, &m, 1);
	write(1, &t, 1);
}

void	ft_bis(char y, char a_x, char a_y)
{
	char	x;

	x = a_y + 1;
	while (x <= '9')
	{
		ft_aff(a_x, a_y);
		write(1, " ", 1);
		ft_aff(y, x);
		if (a_x == '9' && a_y == '8')
		{
		}
		else
		{
			write(1, ", ", 2);
		}
		x++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '9')
	{	
		c = '0';
		while (c <= '9')
		{	
			b = a;
			while (b <= '9')
			{
				ft_bis(b, a, c);
				b++;
			}
			c++;
		}
		a++;
	}
}
