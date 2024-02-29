/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 22:08:15 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/28 18:22:02 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] || dest[i])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt])
	{
		cpt++;
	}
	return (cpt);
}

int	calc_size(char **str, char *sep, int size_src)
{
	int	i;
	int	size;
	int	len_sep;

	len_sep = ft_strlen(sep);
	size = 0;
	i = 0;
	while (i < size_src)
	{
		size += ft_strlen(str[i]) + len_sep;
		i++;
	}
	size -= len_sep;
	return (size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*buffer;
	int		i;

	if (size == 0)
	{
		buffer = malloc(sizeof(char) * 1);
		if (buffer == NULL)
			return (NULL);
		buffer[0] = '\0';
		return (buffer);
	}
	buffer = malloc(sizeof(char) * calc_size(strs, sep, size) + 1);
	if (buffer == NULL)
		return (NULL);
	i = 0;
	buffer[0] = '\0';
	while (i < size)
	{
		ft_strcat(buffer, strs[i]);
		if (i != size - 1)
			ft_strcat(buffer, sep);
		i++;
	}
	return (buffer);
}
/*
int	main()
{	
	char *turing2[] = { 
  	"  salut ",
  	"sal",
  	"sa",
		};
	char	*buffer;
	buffer = ft_strjoin(3, turing2, "|");
	if (buffer[0] == '\0')
		printf("size == 0 marche");
	printf("%s", buffer);
}*/
