/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:22:16 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/28 12:01:17 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc (sizeof(int) * size);
	if (*range == NULL)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
/*
int	main()
{
	int	*b;
	int	size;
	int	i;

	i = 0;
	size = ft_ultimate_range(&b, 0, 1);
	if (size == -1)
	{
		return (0);
	}
	while (i < size)
	{
		printf("buff[%d] = %d; \n", i, b[i]);
		i++;
	}
	printf("size = %d \n", size);
	free(b);

}*/
