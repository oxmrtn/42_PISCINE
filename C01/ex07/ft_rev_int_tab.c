/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 10:43:30 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/12 11:19:30 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	max_i;
	int	i;
	int	tmp;

	max_i = size - 1;
	i = 0;
	tmp = 0;
	while (i <= max_i)
	{
		tmp = tab[i];
		tab[i] = tab[max_i];
		tab[max_i] = tmp;
		i++;
		max_i--;
	}
}
/*
int main()
{
	int tab[5];

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	ft_rev_int_tab(tab, 5);
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);
	printf("%d", tab[4]);
}*/
