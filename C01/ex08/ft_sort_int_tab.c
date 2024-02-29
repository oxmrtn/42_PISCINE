/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:16:38 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/11 15:45:03 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	cpt;
	int	cpt1;

	cpt = 0;
	cpt1 = 0;
	while (cpt1 < size - 1)
	{
		cpt = 0;
		while (cpt < size - 1)
		{
			if (tab[cpt] > tab[cpt + 1])
			{
				tmp = tab[cpt];
				tab[cpt] = tab[cpt + 1];
				tab[cpt + 1] = tmp;
			}
			cpt ++;
		}
		cpt1++;
	}
}
/*
int	main()
{
	int tab[6];

	tab[0] = 5;
	tab[1] = 4;
	tab[2] = 3;
	tab[3] = 2;
	tab[4] = 1;
	tab[5] = 0;
	ft_sort_int_tab(tab, 6);
	printf("tab trie   ");
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);
	printf("%d", tab[4]);
	printf("%d", tab[5]);

}*/
