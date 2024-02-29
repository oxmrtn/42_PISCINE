/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 10:31:14 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/10 10:38:29 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*#include <stdio.h>*/
int	ft_strlen(char *str)
{
	int	cpt;

	cpt = 0;
	while (*str != '\0')
	{
		cpt++;
		str++;
	}
	return (cpt);
}
/*
int	main()
{
	char *str;
	int len;

	str = "Bonjour";
	len = ft_strlen(str);
	printf("%d", len);
}*/
