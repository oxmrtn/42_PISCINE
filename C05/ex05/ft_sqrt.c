/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:15:13 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/23 11:41:50 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt_recur(int nb, int i)
{
	if (i * i == nb)
		return (i);
	else if (i * i > nb)
		return (0);
	else if (i > 46340)
		return (0);
	else
		return (ft_sqrt_recur(nb, i + 1));
}

int	ft_sqrt(int nb)
{
	return (ft_sqrt_recur(nb, 1));
}
/*
#include <stdio.h>
int	main()
{
	//printf("%d", ft_sqrt(2147483647));
	printf("%d", ft_sqrt(2043040000));
}*/
