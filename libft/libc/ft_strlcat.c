/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:35:52 by tborges-          #+#    #+#             */
/*   Updated: 2024/03/08 14:17:32 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;
	i = 0;
	while (dest[dest_len])
		++dest_len;
	while (src[src_len])
		++src_len;
	if (size <= dest_len)
		src_len += size;
	else
		src_len += dest_len;
	while (src[i] && dest_len < size - 1)
		dest[dest_len++] = src[i++];
	dest[dest_len] = '\0';
	return (src_len);
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
