/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:09:06 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/28 11:53:06 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*buff;

	if (min >= max)
	{
		return (NULL);
	}
	i = 0;
	size = max - min;
	buff = malloc(sizeof(int) * size);
	if (buff == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		buff[i] = min + i;
		i++;
	}
	return (buff);
}
/*
int	main()
{
	int	*buff;
	int	i;

	i = 0;
	buff = ft_range(0, -0);
	if (buff == NULL)
	{
		printf("ca marche");
		return (0);
	}
	while (buff[i])
	{
		printf("buff = %d\n", buff[i]);
		i++;
	}	
	printf("buff [i]%d", buff[i]);
	i++;
	while (buff[i])
	{
		printf("buff = %d", buff[i]);
		i++;
	}
	free(buff);
}*/
