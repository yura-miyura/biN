/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-10 16:50:45 by yartym            #+#    #+#             */
/*   Updated: 2025-09-10 16:50:45 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	i = 0;
	while (i < src_len && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
		dest[i++] = '\0';
	return (src_len);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	unsigned int	size = 5;
	char *src = "he";
	char dest[size];
	printf("%d\n", ft_strlcpy(dest, src, size));
	// printf("%ld\n", strlcpy(dest, src, size));
	printf("%s\n", dest);
}
*/
