/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:20:39 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/28 11:46:21 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*srcbis;
	int		i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	srcbis = malloc(sizeof(char) * i + 1);
	if (srcbis == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		srcbis[i] = src[i];
		i++;
	}
	srcbis[i] = '\0';
	return (srcbis);
}
/*
int	main()
{
	char	*c;
	char	*b;

	c = "";
	b = ft_strdup(c);
	printf("|%s| \n", b);
	free(b);
}*/
