/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-13 15:07:35 by yartym            #+#    #+#             */
/*   Updated: 2025-09-13 15:07:35 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	extra;

	dest_len = 0;
	src_len = 0;
	while (dest[dest_len])
		dest_len++;
	while (src[src_len])
		src_len++;
	if (dest_len + 1 > size)
		return (size + src_len);
	extra = dest_len;
	while (*src && extra + 1 < size)
		dest[extra++] = *src++;
	dest[extra] = '\0';
	return (dest_len + src_len);
}

/* #include <bsd/string.h>
#include <stdio.h>
int main(void)
{
	unsigned int size = 6;
	char dest[6] = "Hello ";
	char *src = "World";
	// printf("%li\n", strlcat(dest, src, size));
	printf("%i\n", ft_strlcat(dest, src, size));
	printf("%s\n", dest);
}
*/
