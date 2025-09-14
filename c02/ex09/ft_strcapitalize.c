/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-10 16:23:17 by yartym            #+#    #+#             */
/*   Updated: 2025-09-10 16:23:17 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			if (index == 0)
				str[index] -= 'a' - 'A';
			else if (str[index - 1] == ' ' || str[index - 1] == '+'
				|| str[index - 1] == '-')
				str[index] -= 'a' - 'A';
		}
		index++;
	}
	return (str);
}

#include <stdio.h>
int main(void)
{
	char str[] = "hi, how are you? 42words forty-two; fifty+and+one";
	printf("%s\n", str);
	printf("%s\n", ft_strcapitalize(str));
}
