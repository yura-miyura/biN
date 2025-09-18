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

int	new_word(char c)
{
	int	true_false;

	true_false = !(c >= 'a' && c <= 'z')
		&& !(c >= 'A' && c <= 'Z')
		&& !(c >= '0' && c <= '9');
	return (true_false);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	true_false;

	true_false = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && true_false)
			str[i] -= 'a' - 'A';
		else if (str[i] >= 'A' && str[i] <= 'Z' && !true_false)
			str[i] += 'a' - 'A';
		true_false = new_word(str[i]);
		i++;
	}
	return (str);
}

/* #include <stdio.h>
int main(void)
{
	char str[] = "hi, hOw are you? 42WorDs foRty-tWo; fiFty+and+one";
	printf("%s\n", str);
	printf("%s\n", ft_strcapitalize(str));
}
 */
