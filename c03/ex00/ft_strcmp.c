/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-13 12:06:17 by yartym            #+#    #+#             */
/*   Updated: 2025-09-13 12:06:17 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/* #include <string.h>
#include <stdio.h>
int main(void)
{
	char *s1 = "helljlsadf";
	char *s2 = "helljlsad1";
	printf("%i\n", ft_strcmp(s1, s2));
	printf("%i\n", strcmp(s1, s2));
}
*/
