/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conver_base2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:39:08 by mtrullar          #+#    #+#             */
/*   Updated: 2024/02/28 17:36:34 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_power_len(int a, int b, int k, char *str)
{	
	int	c;
	int	nbr;

	nbr = 1;
	c = 0;
	if (k == 1)
	{
		while (c < b)
		{
			nbr *= a;
			c++;
		}
		return (nbr);
	}
	else
	{
		while (str[c])
			c++;
		return (c);
	}
}

int	indice_tab(char *base, char *str, int j, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
		{
			str[j] = i ;
			return (1);
		}
		i++;
	}
	return (0);
}

int	conversion(char *str, char *base, int k, int j)
{
	int	nbr;
	int	puissance;
	int	tmp;

	puissance = j - k - 1;
	nbr = 0;
	while (k < j && puissance >= 0)
	{
		tmp = ft_power_len(ft_power_len(0, 0, 0, base), puissance, 1, "");
		nbr += str[k] * tmp;
		k++;
		puissance--;
	}
	return (nbr);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i > 1)
		return (1);
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	signe;
	int	i;
	int	k;
	int	nbr;

	if (!(is_valid_base(base)))
		return (0);
	i = 0;
	signe = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while ((str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	k = i;
	while (indice_tab (base, str, i, str[i]))
		i++;
	nbr = conversion(str, base, k, i);
	return (signe * nbr);
}
