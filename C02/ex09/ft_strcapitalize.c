/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:55:41 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/13 17:52:40 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	is_alphanum(char a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	if (a >= 'A' && a <= 'Z')
		return (2);
	if (a >= '0' && a <= '9')
		return (3);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (is_alphanum(str[0]) == 1)
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (is_alphanum(str[i - 1]) == 0 && is_alphanum(str[i]) == 1)
			str[i] = str[i] - 32;
		if (is_alphanum(str[i - 1]) != 0 && is_alphanum(str[i]) == 2)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
int main()
{
	char str[] = "*saLut, comMent tu vas ? 42Mots 0quaRante-deux; cinquante+et+un";
	char *strr;
	strr = ft_strcapitalize(str);
	printf("%s", strr);
}*/
