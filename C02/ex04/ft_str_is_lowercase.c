/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:05:14 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/12 10:45:22 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 97 && *str <= 122)))
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
	str = "123456789";
	printf("%d, strr \n",ft_str_is_numeric(strr));
	printf("%d, str ",ft_str_is_numeric(str));
}*/	
