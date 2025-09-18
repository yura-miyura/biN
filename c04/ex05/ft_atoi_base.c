/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-17 08:49:55 by yartym            #+#    #+#             */
/*   Updated: 2025-09-17 08:49:55 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	length_and_valid_base(char *base)
{
	int	i;
	int	j;
	int	length;

	j = 0;
	length = 0;
	while (base[j])
	{
		i = j + 1;
		if (base[j] == '+' || base[j] == '-')
			return (0);
		while (base[i])
			if (base[j] == base[i++])
				return (0);
		j++;
		length++;
	}
	if (length < 2)
		return (0);
	return (length);
}

int	location_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	is_neg;
	int	result;
	int	base_len;

	i = 0;
	result = 0;
	is_neg = 1;
	base_len = length_and_valid_base(base);
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			is_neg *= -1;
		i++;
	}
	while (str[i] && location_in_base(str[i], base) >= 0)
	{
		result = result * base_len + location_in_base(str[i], base);
		i++;
	}
	return (result * is_neg);
}

/* #include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi_base("-80000000", "0123456789ABCDEF"));

	printf("%d\n", ft_atoi_base("-101010", "01"));

	printf("%d\n", ft_atoi_base("101010", "01"));

	printf("%d\n", ft_atoi_base("//.{", "{/."));
}
 */
