/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:32:10 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/15 18:06:47 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <bsd/string.h>

unsigned int	min(unsigned int a, unsigned int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

unsigned int	ft_strlen(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	len = ft_strlen(dest);
	i = 0;
	j = 0;
	while (dest[j])
	{
		j++;
	}
	if (size > 0)
	{
		while (src[i] && j < size - 1)
		{
			dest[j] = src[i];
			i++;
			j++;
		}
	}
	if (!(size <= len))
		dest[j] = '\0';
	return (ft_strlen(src) + min (size, len));
}
/*
int main()
{
	char src[] = "a";
	char dest[20] = "abca";
	char dest2[20] = "abca";
	unsigned int a = ft_strlcat(dest, src, 2);

	//printf("a = %d, chaine = %s\n", a, dest);
	
	printf("a = %d, chaine = %s \n", b, dest2);
	printf("a = %d, chaine = %s", a, dest);
}*/
