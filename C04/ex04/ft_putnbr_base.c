/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:13:57 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/21 16:12:15 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		j = 0;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (!(base[i] >= 32 && base[i] <= 126)
			&& !(base[i] >= 9 && base[i] <= 13))
			return (0);
		while (base[j])
		{
			if ((base[i] == base[j]) && j != i)
				return (0);
			j++;
		}
		i++;
	}
	if (i > 1)
		return (1);
	else
		return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	long_nbr;
	int		len_base;

	long_nbr = nbr;
	len_base = ft_strlen(base);
	if (is_valid_base(base))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			long_nbr *= -1;
		}
		if (long_nbr < len_base)
			ft_putchar(base[long_nbr]);
		else
		{
			ft_putnbr_base(long_nbr / len_base, base);
			ft_putnbr_base(long_nbr % len_base, base);
		}
	}
}
/*
#include <stdio.h>
int	main()
{
	char base[20] = "01";
	ft_putnbr_base(126, base);
}*/
