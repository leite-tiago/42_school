/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:35:36 by tborges-          #+#    #+#             */
/*   Updated: 2024/03/08 14:19:48 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len])
		++src_len;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			++i;
		}
		dest[i] = '\0';
	}
	return (src_len);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "olaaa";
	char	dest[20];
	char	my_dest[20];
	unsigned int		my_result = ft_strlcpy(my_dest, src, 3);
	unsigned int		expected = strlcpy(dest, src, 3);

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
