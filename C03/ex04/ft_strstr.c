/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:28:36 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/15 18:06:17 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <bsd/string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			j = i;
			k = 0;
			while ((str[j] != '\0') && str[j] == to_find[k])
			{
				j++;
				k++;
			}
			if (to_find[k] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}
/*
int	main()
{
	char str[] = "a";
	char strr[] = "v";
	char *tes;
	
	tes = ft_strstr(str, strr);
	printf("le miens %s \n", tes);
	tes = strstr(str, strr);
	printf("og %s", tes);
}*/
