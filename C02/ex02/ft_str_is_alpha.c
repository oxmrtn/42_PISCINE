/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:05:14 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/13 14:27:53 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	cpt;

	cpt = 0;
	while (*str != '\0')
	{
		if (!((*str >= 64 && *str <= 90) || (*str >= 97 && *str <= 122)))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main()
{
	char *strr;
	char *str;
	strr = "Bonjour2";
	str = "abcdeghijklmnopqrstuvwxyz";
	printf("%d, strr \n",ft_str_is_alpha(strr));
	printf("%d, str ",ft_str_is_alpha(str));
}*/	
