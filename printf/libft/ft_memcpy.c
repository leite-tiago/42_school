/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:34:11 by tborges-          #+#    #+#             */
/*   Updated: 2024/05/01 21:03:47 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst1[50] = "Hello World, this is a test.";
	char	dst2[50] = "Hello World, this is a test.";
	char	src[50] = "Hello World, this is a banana.";

	printf("----------------------------\n");
	printf("Before ft_memcpy(): %s\n", dst1);
	ft_memcpy(dst1, src, 30*sizeof(char));
	printf("After ft_memcpy(): %s\n", dst1);
	printf("----------------------------\n");
	printf("Before memcpy(): %s\n", dst2);
	memcpy(dst2, src, 30*sizeof(char));
	printf("After memcpy(): %s\n", dst2);
	printf("----------------------------\n");
	if (ft_strlen(dst1) == ft_strlen(dst2))
	{
		for (int i = 0; i < ft_strlen(dst1); i++)
		{
			if (dst1[i] != dst2[i])
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
