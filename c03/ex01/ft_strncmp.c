/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-13 12:05:25 by yartym            #+#    #+#             */
/*   Updated: 2025-09-13 12:05:25 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 && *s2 && *s1 == *s2)
	{
		n--;
		if (n > 0)
		{
			s1++;
			s2++;
		}
	}
	return (*s1 - *s2);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
<<<<<<< HEAD
	unsigned int n = 2;
	char *s1 = "heli";
	char *s2 = "helu";
=======
	unsigned int n = 4;
	char *s1 = "hell";
	char *s2 = "hel";
>>>>>>> 0daa2a77083ee5ced4268ac646fde8bd9de8e38c

	printf("%i\n", ft_strncmp(s1, s2, n));
	printf("%i\n", strncmp(s1, s2, n));
}
*/
