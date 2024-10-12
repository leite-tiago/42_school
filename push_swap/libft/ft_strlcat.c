/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:35:52 by tborges-          #+#    #+#             */
/*   Updated: 2024/04/24 19:23:49 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	d;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < dstsize)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char			my_dest[20] = "Hello";
	char			dest[20] = "Hello";
	char			*src;
	unsigned int	size;
	unsigned int	my_result;
	unsigned int	expected;

	src = " world!";
	size = 20;
	printf("----------------------------\n");
	printf("Word to concatenate: %s\n", src);
	printf("Size: %i\n", size);
	printf("Before concatenation: dest = %s\n", dest);
	printf("Length of dest before concatenation: %zu\n", strlen(dest));
	printf("----------------------------\n");
	printf("Expected:\n");
	expected = strlcat(dest, src, size);
	printf("After concatenation: dest = %s\n", dest);
	printf("Length of dest after concatenation: %zu\n", strlen(dest));
	printf("Return value of strlcat: %u\n", expected);
	printf("----------------------------\n");
	printf("my result:\n");
	my_result = ft_strlcat(my_dest, src, size);
	printf("After concatenation: dest = %s\n", my_dest);
	printf("Length of dest after concatenation: %zu\n", strlen(my_dest));
	printf("Return value of ft_strlcat: %u\n", my_result);
	return (0);
}
*/
