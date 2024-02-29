/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:18:20 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/20 11:33:29 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt])
	{
		cpt++;
	}
	return (cpt);
}
/*
int main()
{
	char test[]= "";
	printf("%d", ft_strlen(test));
}*/
