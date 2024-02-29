/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:02:27 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/21 15:30:09 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char **str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt])
		cpt++;
	return (cpt);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	len;

	if (argc >= 1)
	{
		len = ft_strlen(argv) - 1;
		while (len >= 1)
		{
			ft_putstr(argv[len]);
			len--;
			write(1, "\n", 1);
		}	
	}
}
