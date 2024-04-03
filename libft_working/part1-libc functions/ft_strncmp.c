/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:36:46 by tborges-          #+#    #+#             */
/*   Updated: 2024/03/08 14:31:49 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (!n)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		++i;
	return (s1[i] - s2[i]);
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
