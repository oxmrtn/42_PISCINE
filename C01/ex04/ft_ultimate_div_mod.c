/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:35:07 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/09 14:43:46 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_tmp;
	int	b_tmp;

	a_tmp = *a;
	b_tmp = *b;
	*a = a_tmp / b_tmp;
	*b = a_tmp % b_tmp;
}
/*
int main()
{
	int a, b;
	a = 4;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("div %d, ", a);
	printf("mod %d", b);
}*/
