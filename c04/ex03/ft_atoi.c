/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-17 07:53:40 by yartym            #+#    #+#             */
/*   Updated: 2025-09-17 07:53:40 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	is_neg;
	int	result;

	i = 0;
	result = 0;
	is_neg = 1;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			is_neg *= -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * is_neg);
}

/* #include <stdio.h>
int main(void)
{
	char *str;
	str = "+--123f+-";
	printf("%d\n", ft_atoi(str));

	str = "a 123";
	printf("%d\n", ft_atoi(str));

	str = "+ -1231";
	printf("%d\n", ft_atoi(str));

	str = "--+-+-1231";
	printf("%d\n", ft_atoi(str));
} */
