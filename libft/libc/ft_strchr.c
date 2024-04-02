/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:36:03 by tborges-          #+#    #+#             */
/*   Updated: 2024/04/02 16:33:26 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && c != *s)
		s++;
	if (c == *s)
		return ((char *)s);
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Hello, world!";
	char	*ft_strchr_result;
	char	*original_strchr_result;

	ft_strchr_result = ft_strchr(str, 'o');
	original_strchr_result = strchr(str, 'o');
	printf("----------------------------\n");
	printf("Using ft_strchr: %s\n", ft_strchr_result);
	printf("----------------------------\n");
	printf("Using strchr: %s\n", original_strchr_result);
	printf("----------------------------\n");
	if (ft_strchr_result == original_strchr_result)
		printf("The results match!✅\n");
	else
		printf("The results don't match!❌\n");
	printf("----------------------------\n");
}
*/
