/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:34:23 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/28 18:01:19 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_power_len(int a, int b, int k, char *str);
int	ft_atoi_base(char *str, char *base);
int	is_valid_base(char *base);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[k])
	{
		k++;
	}
	while (src[i] && j < nb)
	{
		dest[k] = src[j];
		k++;
		j++;
	}
	dest[k] = '\0';
	return (dest);
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

int	size_of_number(int number, char *base)
{
	int	len_base;
	int	cnt;

	len_base = ft_power_len(0, 0, 0, base);
	cnt = 0;
	if (number < 0)
	{
		cnt++;
		number *= -1;
	}
	if (number < len_base)
		cnt++;
	else
	{
		while (number >= len_base)
		{
			cnt ++;
			number /= len_base;
		}
		cnt++;
	}
	return (cnt);
}

void	number_base(char *buffer, int number, char *base)
{
	int	len_base;

	len_base = ft_power_len(0, 0, 0, base);
	if (number < 0)
	{
		ft_strncat(buffer, "-", 1);
		number *= -1;
	}
	if (number < len_base)
		ft_strncat(buffer, &base[number], 1);
	else
	{
		number_base(buffer, number / len_base, base);
		number_base(buffer, number % len_base, base);
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*cpy;
	char	*final;
	int		tst;

	if (!(is_valid_base(base_from)) || !(is_valid_base(base_to)))
		return (NULL);
	cpy = malloc(sizeof(char) * ft_power_len(0, 0, 0, nbr));
	if (cpy == NULL)
		return (NULL);
	ft_strncpy(cpy, nbr, ft_power_len(0, 0, 0, nbr));
	tst = ft_atoi_base(cpy, base_from);
	free(cpy);
	final = malloc(sizeof(char) * size_of_number(tst, base_to));
	if (final == NULL)
		return (NULL);
	final[0] = '\0';
	number_base(final, tst, base_to);
	return (final);
}
/*
int	main()
{
	char *test = ft_convert_base("7F", "0123456789ABCDEF", "01");

	printf("%s", test);
	free(test);
}*/
