/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:39:04 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/13 17:49:23 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*#include<bsd/string.h>*/
unsigned int	ft_strlen(char *str)
{
	unsigned int	cpt;

	cpt = 0;
	while (str[cpt] != '\0')
	{
		cpt++;
	}
	return (cpt);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i ++;
		}
	dest[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int main()
{
	char src[] = "Bonjour \0 ";
	char dest[10];
	unsigned int	b;

	b = ft_strlcpy(dest, src, 0);
	printf("Mine ; \nsrc = %s, \n dest = %s, \n b = %d", src , dest , b);
}*/
