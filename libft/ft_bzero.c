/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:31:52 by tborges-          #+#    #+#             */
/*   Updated: 2024/04/03 16:33:27 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[50] = "Hello World, this is a test.";
	char str2[50] = "Hello World, this is a test.";

	printf("----------------------------\n");
	printf("Before ft_bzero(): %s\n", str1);
	ft_bzero(str1 + 13, 8*sizeof(char));
	printf("After ft_bzero(): %s\n", str1);
	printf("----------------------------\n");
	printf("Before bzero(): %s\n", str2);
	bzero(str2 + 13, 8*sizeof(char));
	printf("After bzero(): %s\n", str2);
	printf("----------------------------\n");
	if (ft_strlen(str1) == ft_strlen(str2))
	{
		for (int i = 0; i < ft_strlen(str1); i++)
		{
			if (str1[i] != str2[i])
			{
				printf("The results don't match!❌\n");
				printf("----------------------------\n");
				return (0);
			}
		}
		printf("The results match!✅\n");
	}
	else
		printf("The results don't match!❌\n");
	printf("----------------------------\n");
}
*/
