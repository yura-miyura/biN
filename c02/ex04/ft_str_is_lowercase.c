/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-10 13:20:07 by yartym            #+#    #+#             */
/*   Updated: 2025-09-10 13:20:07 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!(str[index] >= 'a' && str[index] <= 'z'))
			return (0);
		index++;
	}
	return (1);
}

/* #include <stdio.h>
int main(void)
{
	char *str = "hell1o";
	printf("%i\n", ft_str_is_lowercase(str));
} */
