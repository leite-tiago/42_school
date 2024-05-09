/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:34:39 by tborges-          #+#    #+#             */
/*   Updated: 2024/05/09 14:38:26 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*temp;

	temp = (void *)src;
	if (!src && !dest)
		return (dest);
	if (src > dest)
		ft_memcpy(dest, temp, n);
	else
	{
		while (n--)
			((char *)dest)[n] = ((char *)temp)[n];
	}
	return (dest);
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
