/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:11:54 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/23 10:03:57 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	nbr;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	nbr = nb;
	nb--;
	while (nb >= 1)
	{
		nbr *= nb;
		nb--;
	}
	return (nbr);
}
/*
int	main()
{
	int a = 5;
	printf("%d", ft_iterative_factorial(a));
}*/
