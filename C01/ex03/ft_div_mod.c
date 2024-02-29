/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:18:39 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/09 14:31:50 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int	a = 4;
	int	b = 2;
	int 	d;
	int	m;

	ft_div_mod(a, b, &d, &m);
	printf("/%d, ", d);
	printf("mod %d", m);
}*/
