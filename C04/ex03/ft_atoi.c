/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:53:10 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/21 15:37:46 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

int	is_sign(char c)
{
	return (c == '+' || c == '-');
}

int	ft_atoi(char *str)
{
	int	signe;
	int	i;
	int	nb;

	nb = 0;
	i = 0;
	signe = 1;
	while (is_space(str[i]) && str[i])
		i++;
	while (is_sign(str[i]) && str[i])
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (is_num(str[i]) && str[i])
	{
		nb = nb * 10;
		nb += (str[i] - '0');
		i++;
	}
	return (signe * nb);
}

#include <stdio.h>
int main()
{
	char test[] = "2147483647";
	int b =ft_atoi(test);
	printf("result = %d", b);
}
