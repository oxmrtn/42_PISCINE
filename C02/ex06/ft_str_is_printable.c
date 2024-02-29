/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:51:34 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/13 17:51:17 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str > 31 && *str != 127))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main()
{
	char tst[] = "blablab\na";
	int b =ft_str_is_printable(tst);
	printf("%d", b);
}*/
