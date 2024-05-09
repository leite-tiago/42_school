/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:36:46 by tborges-          #+#    #+#             */
/*   Updated: 2024/05/09 14:08:37 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char			str1[] = "Hello";
	char			str2[] = "Hella";
	unsigned int	n;
	int				my_result;
	int				expected;

	n = 4;
	expected = strncmp(str1, str2, n);
	my_result = ft_strncmp(str1, str2, n);
	printf("----------------------------\n");
	printf("Expected:\n");
	printf("Return value of strncmp: %i\n", expected);
	printf("----------------------------\n");
	printf("my result:\n");
	printf("Return value of ft_strncmp: %i\n", my_result);
	printf("----------------------------\n");
}
*/
