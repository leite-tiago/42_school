/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:31:32 by tborges-          #+#    #+#             */
/*   Updated: 2024/05/01 21:06:39 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[50] = "Hello World, this is a test.";
	char	str2[50] = "Hello World, this is a test.";

	printf("----------------------------\n");
	printf("Before ft_memset(): %s\n", str1);
	ft_memset(str1 + 13, '.', 8*sizeof(char));
	printf("After ft_memset(): %s\n", str1);
	printf("----------------------------\n");
	printf("Before memset(): %s\n", str2);
	memset(str2 + 13, '.', 8*sizeof(char));
	printf("After memset(): %s\n", str2);
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
