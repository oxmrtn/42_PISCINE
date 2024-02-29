/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:16:34 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/14 12:42:49 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	to_hex(int a)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hex[(a / 16)], 1);
	write(1, &hex[(a % 16)], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] <= 31) || (str[i] > 126))
		{
			to_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*
int main()
{
	char phrase[100] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(phrase);
}*/
