/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:26:45 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/20 11:36:21 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	int	tmp;

	if (nbr <= 9 && nbr >= 0)
		ft_putchar(nbr + '0');
	else if (nbr == -2147483648)
		write(1, "-2147483648", 11);
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr((nbr * -1));
	}
	else
	{
		tmp = nbr % 10;
		ft_putnbr(nbr / 10);
		ft_putchar(tmp + '0');
	}
}
/*
int main()
{
	ft_putnbr(-2147483648);
}*/
