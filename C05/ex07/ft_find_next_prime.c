/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:05:29 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/22 17:06:38 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nbr)
{
	if (nbr < 2)
		return (2);
	else if (ft_is_prime(nbr))
		return (nbr);
	else
		return (ft_find_next_prime(nbr + 1));
}
/*
#include <stdio.h>
int	main()
{
	int i = -2;
	while(i <= 10)
	{
	printf("%d - %d\n", i, ft_find_next_prime(i));
	i++;
	}
}*/
