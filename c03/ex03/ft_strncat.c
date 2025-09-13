/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-13 12:04:42 by yartym            #+#    #+#             */
/*   Updated: 2025-09-13 12:04:42 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	index;

	index = 0;
	while (dest[index] != '\0')
		index++;
	while (*src && nb-- > 0)
		dest[index++] = *src++;
	dest[index] = '\0';
	return (dest);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	unsigned int nb = 7;
	char dest[20] = "hello ";
	char *src = "world asfjflajsd;lf";

	printf("%s\n", ft_strncat(dest, src, nb));
	// printf("%s\n", strncat(dest, src, nb));
}
*/
