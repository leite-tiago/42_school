/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:35:36 by tborges-          #+#    #+#             */
/*   Updated: 2024/05/09 14:10:31 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len])
		++src_len;
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			++i;
		}
		dst[i] = '\0';
	}
	return (src_len);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char			src[] = "olaaa";
	char			dest[20];
	char			my_dest[20];
	unsigned int	my_result;
	unsigned int	expected;

	my_result = ft_strlcpy(my_dest, src, 3);
	expected = strlcpy(dest, src, 3);
	printf("----------------------------\n");
	printf("expected:\n");
	printf("Return value of strlcpy: %i\n", expected);
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("----------------------------\n");
	printf("my result:\n");
	printf("Return value of strlcpy: %i\n", my_result);
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
}
*/
