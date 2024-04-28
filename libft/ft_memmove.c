/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:34:39 by tborges-          #+#    #+#             */
/*   Updated: 2024/04/24 19:23:21 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	if ((size_t)dst - (size_t)src < len)
	{
		i = len - 1;
		while (i >= 0 && i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[50] = "Hello World, this is a test.";
	char	str2[50] = "Hello World, this is a test.";
	char	src[50] = "Hello banana.";

	printf("----------------------------\n");
	printf("Before ft_memset(): %s\n", str1);
	ft_memmove(str1, src, sizeof(src));
	printf("After ft_memmove(): %s\n", str1);
	printf("----------------------------\n");
	printf("Before memmove(): %s\n", str2);
	memmove(str2, src, sizeof(src));
	printf("After memmove(): %s\n", str2);
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
