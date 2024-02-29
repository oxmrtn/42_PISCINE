/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:07:27 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/28 18:17:03 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i != n)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}

int	cpt_words(char *str, char *charset)
{
	int	words;
	int	i;

	i = 1;
	words = 0;
	while (str[i])
	{
		if (is_charset(str[i], charset) && !(is_charset(str[i - 1], charset)))
			words++;
		i++;
	}
	if (!(str[0]))
		return (0);
	if (!is_charset(str[i - 1], charset))
		return (words + 1);
	return (words);
}

void	test(int *i, int *buffer_index)
{
	*i = 0;
	*buffer_index = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**buffer;
	int		i;
	int		k;
	int		buffer_index;

	buffer = malloc(sizeof(char *) * cpt_words(str, charset) + 1);
	test(&i, &buffer_index);
	if (buffer == NULL)
		return (NULL);
	while (str[i++])
	{
		k = i;
		while (str[k] && !(is_charset(str[k], charset)))
			k++;
		if (k > i)
		{
			buffer[buffer_index] = malloc((sizeof(char) * (k - i)));
			if (buffer[buffer_index] == NULL)
				return (NULL);
			ft_strncpy(buffer[buffer_index++], &str[i], (k - i));
			i = k;
		}
	}
	buffer[buffer_index] = 0;
	return (buffer);
}
/*
int	main()
{
	//char words2[] = "Bononononononononononononononon";
	char words2[] = "  yo                les me              cs        ";
	char *charset = " ";
	char **buffer;
	printf("compte word = %d \n", cpt_words(words2, charset));
	buffer = ft_split(words2, charset);
	int i = 0;
	while (buffer[i] != NULL)
	{
		printf("buffer[%d] = |%s| \n", i , buffer[i]);
		free(buffer[i]);
		i++;
	}
	printf("out of loop %s", buffer[i]);
	free(buffer);
}*/
